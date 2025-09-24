#include <stdio.h>

int main(){
	int num,reminder,original,reversed=0;
	
	printf("Enter number: \t");
	scanf("%d", &num);
	
	original = num;
	
	while(num != 0){
		reminder = num % 10;
		reversed = reversed * 10 + reminder;
		num = num / 10;
	}
	
	if( reversed == original){
		printf("The ginven number is palindrom");
	} else {
		printf("The given number is not palindrom");
	}
}
