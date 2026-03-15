#include <stdio.h>
#include <string.h>

int firstUniqChar(char s[]) {
    int count[256] = {0};
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (count[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    char s[100];

    scanf("%s", s);

    printf("%d", firstUniqChar(s));

    return 0;
}
