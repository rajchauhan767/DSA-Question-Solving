#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expected = n * (n + 1) / 2;
    int missing = expected - sum;

    printf("%d\n", missing);

    return 0;
}
