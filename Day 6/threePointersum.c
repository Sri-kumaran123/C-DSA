#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void threeSum(int *nums, int n) {
    qsort(nums, n, sizeof(int), cmp);  // sort array
	int i;
    for (i = 0; i < n - 2; i++) {
        // Skip duplicates
        if (i > 0 && nums[i] == nums[i-1]) continue;

        int *left = nums + i + 1;         // pointer to left
        int *right = nums + n - 1;        // pointer to right

        while (left < right) {
            int sum = nums[i] + *left + *right;

            if (sum == 0) {
                printf("[%d, %d, %d]\n", nums[i], *left, *right);

                // Move pointers and skip duplicates
                int lastLeft = *left, lastRight = *right;
                while (left < right && *left == lastLeft) left++;
                while (left < right && *right == lastRight) right--;
            }
            else if (sum < 0) left++;
            else right--;
        }
    }
}

int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(nums)/sizeof(nums[0]);

    threeSum(nums, n);
    return 0;
}


// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*));
