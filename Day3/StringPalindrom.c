#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int left, right, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);  // Reads string (without spaces)

    left = 0;
    right = strlen(str) - 1;

    
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);

    return 0;
}

