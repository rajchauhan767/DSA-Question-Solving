#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int count;

    for(int i = 0; i < n; i++) {
        count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[j] > arr[i])
                count++;
        }

        if(count == k - 1) {
            printf("%d\n", arr[i]);
            break;
        }
    }

    return 0;
}
