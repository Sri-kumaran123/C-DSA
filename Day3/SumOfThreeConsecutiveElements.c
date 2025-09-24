#include <stdio.h>

int main(){
	int array[] = {1,2,5,6,6,9,9,6,15};
	int windowsize = 3;
	int size = sizeof(array) / sizeof(int);
	
	if (size < windowsize) {
		printf("Invalid Values");
		return 1;
	}
	
	int maxsum = 0;
	int i;
	for(i =0; i<windowsize; i++){
		maxsum +=array[i];
	}
	int startindex = 0;
	int current_sum = 0;
	for(i=1;i<=size - windowsize;i++){
		current_sum = current_sum - array[i - 1] + array[ i + windowsize - 1];
		if(current_sum > maxsum){
			maxsum = current_sum;
			startindex = i;
		}
	}
	
	printf("Maximum sum of three consecutive elements: %d\n", maxsum);
    printf("Triplet: [%d, %d, %d]\n",
           array[startindex],
           array[startindex + 1],
           array[startindex + 2]);
	return 0;
}
