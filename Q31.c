#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isAnagram(char s[], char t[]) {
    if (strlen(s) != strlen(t))
        return 0;

    qsort(s, strlen(s), sizeof(char), (int (*)(const void *, const void *)) strcmp);
    qsort(t, strlen(t), sizeof(char), (int (*)(const void *, const void *)) strcmp);

    if (strcmp(s, t) == 0)
        return 1;
    else
        return 0;
}

int main() {
    char s[100], t[100];

    scanf("%s %s", s, t);

    if (isAnagram(s, t))
        printf("true");
    else
        printf("false");

    return 0;
}
