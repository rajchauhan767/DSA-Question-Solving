#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int len = strlen(str);
    int pos = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] != '#') {
            str[pos++] = str[i];
        }
    }

    str[pos] = '\0';

    printf("%s\n", str);

    return 0;
}
