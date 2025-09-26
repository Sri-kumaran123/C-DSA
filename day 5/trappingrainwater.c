#include <stdio.h>

// time o(n)
// space o(1)
int main() {
    int n, i;
    printf("Enter number of bars: ");
    scanf("%d", &n);

    int height[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    int leftMax[n], rightMax[n];
    leftMax[0] = height[0];
    for (i = 1; i < n; i++) {
        if (height[i] > leftMax[i - 1])
            leftMax[i] = height[i];
        else
            leftMax[i] = leftMax[i - 1];
    }

    rightMax[n - 1] = height[n - 1];
    for (i = n - 2; i >= 0; i--) {
        if (height[i] > rightMax[i + 1])
            rightMax[i] = height[i];
        else
            rightMax[i] = rightMax[i + 1];
    }

    int water = 0;
    for (i = 0; i < n; i++) {
        int minHeight = (leftMax[i] < rightMax[i]) ? leftMax[i] : rightMax[i];
        water += (minHeight - height[i]);
    }

    printf("Total trapped water = %d\n", water);

    return 0;
}

