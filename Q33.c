#include <stdio.h>
#include <string.h>

char firstNonRepeated(char s[]) {
    int count[256] = {0};
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (count[s[i]] == 1) {
            return s[i];
        }
    }

    return '\0';
}

int main() {
    char s[100];
    scanf("%s", s);

    char result = firstNonRepeated(s);

    if (result != '\0')
        printf("%c", result);
    else
        printf("No non-repeated character found");

    return 0;
}
