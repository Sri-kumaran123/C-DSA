#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str1[100], str2[100];
    int freq[26] = {0};
    int i;
    
    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);
    
    i = 0;
    while (str1[i] != '\0') {
        if (isalpha((unsigned char)str1[i])) {
            freq[tolower((unsigned char)str1[i]) - 'a']++;
        }
        i++;
    }
    
    i = 0;
    while (str2[i] != '\0') {
        if (isalpha((unsigned char)str2[i])) {
            freq[tolower((unsigned char)str2[i]) - 'a']--;
        }
        i++;
    }
    
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }
    
    printf("The strings ARE anagrams.\n");
    return 0;
    
}
