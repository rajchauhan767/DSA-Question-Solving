#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("No Factors\n");
        return 0;
    }

    num = abs(num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d", i);
            if (i != num) {
                printf(",");
            }
        }
    }
    printf("\n");

    return 0;
}
