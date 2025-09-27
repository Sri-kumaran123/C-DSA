#include <stdio.h>
#include <ctype.h>  // for isalnum() and tolower()
#include <string.h>

int isPalindrome(char *s) {
    char *left = s;                   // pointer to start
    char *right = s + strlen(s) - 1;  // pointer to end

    while (left < right) {
        // Move left pointer to next alphanumeric
        while (left < right && !isalnum(*left)) left++;
        // Move right pointer to previous alphanumeric
        while (left < right && !isalnum(*right)) right--;

        // Compare characters ignoring case
        if (tolower(*left) != tolower(*right))
            return 0;  // false

        left++;
        right--;
    }

    return 1; // true
}

int main() {
    char str[] = "A man, a plan, a canal: Panama";

    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

