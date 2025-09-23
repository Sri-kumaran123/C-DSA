

#include <stdio.h>

int main(){
	int n;
	printf ( "Enter a number:\t");
	scanf("%d", &n);
	
	if(n < 0) n = -n;
	printf(" Absolute Value: %d\n", n);

	
	return 0;
}
