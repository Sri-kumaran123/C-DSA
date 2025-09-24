
#include <stdio.h>

int main(){
	
	 int nums[] = {1,2,3};
	 // int nums[] = {1, 7, 3, 6, 5, 6};

	 int size = sizeof(nums) / sizeof(int);
	 int total = 0,leftsum = 0,pivot = -1;
	 
	 int i ;
	 for( i=0; i < size ; i++) total += nums[i];
	 
	 for(i=0;i<size;i++){
	 	if( leftsum == total - leftsum - nums[i] ){
	 		pivot = i;
            break;
		 }
		 
		 leftsum += nums[i];
	 }
	 
	if (pivot != -1)
        printf("Pivot Index: %d\n", pivot);
    else
        printf("No Pivot Index found.\n");

    return 0;
	 
}
