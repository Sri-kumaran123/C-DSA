
#include <stdio.h>

int main() {
	float total, discount = 0, finalPrice;
	
	printf("Enter total purchase amount: ");
    scanf("%f", &total);
	
	
	if (total < 0)
        printf("Invalid amount\n");
    else if (total >= 5000)
        discount = 0.20 * total; 
    else if (total >= 3000)
        discount = 0.10 * total; 
    else if (total >= 1000)
        discount = 0.05 * total; 
    else
        discount = 0;
	
	
	finalPrice = total - discount;
    
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
	
}
