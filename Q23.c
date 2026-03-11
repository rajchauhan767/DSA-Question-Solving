#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int pos = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    while(pos < n) {
        nums[pos] = 0;
        pos++;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    return 0;
}
