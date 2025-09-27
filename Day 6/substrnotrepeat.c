#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int seen[256];        // ASCII characters
    int i;
    for(i=0;i<256;i++) seen[i] = -1;

    char *start = s;      // start of window
    char *end = s;        // end of window
    int maxLen = 0;
    int index = 0;        // position relative to s

    while (*end != '\0') {
        unsigned char c = *end;

        // Check if character was seen inside current window
        if (seen[c] >= start - s) {
            start = s + seen[c] + 1; // move start pointer forward
        }

        seen[c] = end - s;            // update last seen index
        int len = end - start + 1;    // current window length
        if (len > maxLen) maxLen = len;

        end++; // move end pointer
    }

    return maxLen;
}

int main() {
    char str[] = "abcabcbb";
    int len = lengthOfLongestSubstring(str);
    printf("Length of longest substring without repeating characters: %d\n", len);
    return 0;
}

