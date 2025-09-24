#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
	char str[100];
	int letters[26] = {0};
	int i =0, isIsogram = 1;
	
	printf("Enter a word: ");
    scanf("%99s", str);
    
    while(str[i] != '\0'){
    	if(isalpha((unsigned char) str[i])){
    		int index = tolower((unsigned char)str[i]) - 'a';
    		
    		if (letters[index] == 1) { // Letter already seen
                isIsogram = 0;
                break;
            }
            
            letters[index] = 1;
		}
		i++;
	}
	
	if (isIsogram)
        printf("\"%s\" is an isogram.\n", str);
    else
        printf("\"%s\" is not an isogram.\n", str);

    return 0;
}
