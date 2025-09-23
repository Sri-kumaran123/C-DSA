
#include <stdio.h>
int main() {
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d%d%d", &a, &b,&c);
	
	int largest = (a > b ? (a > c ? a :c) : (b > c ? b : c));
	int smallest = ( a < b ? (a < c ? a :c) : (b < c ? b : c));
	
	printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}
