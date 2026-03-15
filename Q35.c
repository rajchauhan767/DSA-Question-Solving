#include <stdio.h>
#include <string.h>

void longestPalindrome(char s[]) {
    int n = strlen(s);
    int start = 0, maxLength = 1;

    for (int i = 0; i < n; i++) {
        // Odd length palindrome
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }

    for (int i = start; i < start + maxLength; i++) {
        printf("%c", s[i]);
    }
}

int main() {
    char s[100];
    scanf("%s", s);

    longestPalindrome(s);

    return 0;
}
