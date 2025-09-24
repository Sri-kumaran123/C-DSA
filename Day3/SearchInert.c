#include <stdio.h>

int main() {
	int nums[] = {1, 3, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    int i, position = n;
    
    printf("Enter target value: ");
    scanf("%d", &target);
    
    for (i =0; i< n; i++){
    	if (nums[i] == target) {
            position = i;  
            break;         
        } 
        else if (nums[i] > target) {
            position = i; 
            break;         
        } 
	}
	
	printf("Insert position of %d is %d\n", target, position);

    return 0;
}
