#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &k);

    k = k % n;

    int temp[n];

    for(int i = 0; i < n; i++)
        temp[(i + k) % n] = nums[i];

    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
