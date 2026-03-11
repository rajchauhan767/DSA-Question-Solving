#include <stdio.h>

int calculate_tyres(int cars, int bikes) {
    return (cars * 4) + (bikes * 2);
}

int main() {
    int n, cars, bikes;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &cars, &bikes);
        int total_tyres = calculate_tyres(cars, bikes);
        printf("%d\n", total_tyres);
    }

    return 0;
}
