

#include <stdio.h>
#include <stdlib.h>

int* twoSum(
	int *nums, int target, int size
)
{
	
	int i,j;
	for(i = 0; i< size; i++){
		for (j = i+1; j<size; j++){
			if( nums[i] + nums[j] == target) {
				int *res = (int*)malloc( 2 * sizeof(int));
				res[0] = i;
				res[1] = j;
				return res;
			}
		}
	}
	return NULL;
}

int main(){
	
	int nums[] = {2,3,6,7,8};
	int target = 15;
	
	int *result = twoSum(
		nums,
		target,
		sizeof(nums) /sizeof(int)
	);
	if(result == NULL) {
		free(result);
		return 1;
	}
	printf("Values in the index of [%d, %d]", result[0], result[1]);
	free(result);
	return 0;
	
}
