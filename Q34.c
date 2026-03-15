#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) {
    int i, j;
    j = strlen(s) - 1;

    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[100];
    scanf("%s", s);

    if (isPalindrome(s))
        printf("true");
    else
        printf("false");

    return 0;
}
