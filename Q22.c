#include <stdio.h>

int main() {
    int n, target, count = 0;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target)
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
