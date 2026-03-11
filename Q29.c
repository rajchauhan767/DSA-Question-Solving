#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int len = strlen(str);

    for(int i = 0; i < len; ) {
        char current = str[i];
        int count = 0;

        while(i < len && str[i] == current) {
            count++;
            i++;
        }

        printf("%c%d", current, count);
    }

    printf("\n");
    return 0;
}
