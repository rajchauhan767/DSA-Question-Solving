#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int count = 0, candidate;

    for(int i = 0; i < n; i++) {
        if(count == 0)
            candidate = nums[i];

        if(nums[i] == candidate)
            count++;
        else
            count--;
    }

    printf("%d\n", candidate);

    return 0;
}
