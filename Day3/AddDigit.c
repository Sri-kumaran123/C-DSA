#include <stdio.h>

int main(){
	int num, sum, temp;
	
	printf("Enter a number: ");
    scanf("%d", &num);
    
    do{
    	sum = 0;
    	temp = num;
    	
    	do{
    		sum += temp % 10;
    		temp /=10;
		} while(temp != 0);
		
		num = sum;
    	
	}while( num >= 10);
	
	printf("Result after adding digits repeatedly: %d\n", num);

    return 0;
	
}
