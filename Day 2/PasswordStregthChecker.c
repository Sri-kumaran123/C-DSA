#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Password {
    char value[50];
};

int main() {
    struct Password pwd;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int len;

    printf("Enter your password: ");
    scanf("%s", pwd.value);

    len = strlen(pwd.value);

    // Check password characters
    for(int i = 0; i < len; i++) {
        if(isupper(pwd.value[i])) hasUpper = 1;
        if(islower(pwd.value[i])) hasLower = 1;
        if(isdigit(pwd.value[i])) hasDigit = 1;
        if(!isalnum(pwd.value[i])) hasSpecial = 1;
    }

    // Evaluate password strength
    if(len < 6)
        printf("Password is too short: Very Weak\n");
    else if(len >= 6 && len < 8) {
        if(hasUpper + hasLower + hasDigit + hasSpecial >= 3)
            printf("Password Strength: Medium\n");
        else
            printf("Password Strength: Weak\n");
    }
    else { // len >= 8
        if(hasUpper && hasLower && hasDigit && hasSpecial)
            printf("Password Strength: Very Strong\n");
        else if((hasUpper + hasLower + hasDigit + hasSpecial) >= 3)
            printf("Password Strength: Strong\n");
        else
            printf("Password Strength: Medium\n");
    }

    return 0;
}

