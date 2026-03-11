#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for(int i = 1; i < n; i++) {
        if(nums[i] < 0) {
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);

        result = max(result, maxProd);
    }

    printf("%d\n", result);

    return 0;
}
