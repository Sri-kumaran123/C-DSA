#include <stdio.h>

char* strStr(char *haystack, char *needle) {
    if (*needle == '\0') return haystack;  // empty needle
	char *h;
    for (h = haystack; *h != '\0'; h++) {
        char *h_ptr = h;
        char *n_ptr = needle;

        // Compare characters
        while (*h_ptr != '\0' && *n_ptr != '\0' && *h_ptr == *n_ptr) {
            h_ptr++;
            n_ptr++;
        }

        // If reached end of needle, match found
        if (*n_ptr == '\0') return h;
    }

    return NULL; // not found
}

int main() {
    char haystack[] = "hello";
    char needle[] = "llo";

    char *res = strStr(haystack, needle);
    if (res)
        printf("Substring found: %s\n", res);
    else
        printf("Substring not found\n");

    return 0;
}

