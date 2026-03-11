#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    if(month < 1 || month > 12) {
        printf("Invalid Month Entered\n");
    } else if(month >= 3 && month <= 5) {
        printf("Season: Spring\n");
    } else if(month >= 6 && month <= 8) {
        printf("Season: Summer\n");
    } else if(month >= 9 && month <= 11) {
        printf("Season: Autumn\n");
    } else {
        printf("Season: Winter\n");
    }

    return 0;
}
