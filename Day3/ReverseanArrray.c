#include <stdio.h>

int main(){
	int nums[] = {1,2,3,4,5};
	int size = sizeof(nums) / sizeof(int);
	int left,right;
	for(left = 0, right = size -1; left <right; left++, right--){
		int temp = nums[left];
		nums[left] = nums[right];
		nums[right] = temp;
	}
	
	printf("Reversed array: \n");
	int i;
	for(i = 0; i< size;i++)
		printf("%d", nums[i]);
	
}
