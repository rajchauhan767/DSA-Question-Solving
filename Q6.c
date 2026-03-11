#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[50];
    int price, discount;
    int min_discount = 101; 
    char min_item[50];

    for (int i = 0; i < n; i++) {
        scanf("%[^,],%d,%d", name, &price, &discount);
        getchar();
        if (discount < min_discount) {
            min_discount = discount;
            strcpy(min_item, name);
        }
    }

    printf("%s\n", min_item);

    return 0;
}
