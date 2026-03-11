#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char steps[n + 1];
    scanf("%s", steps);

    int level = 0, valleys = 0;

    for(int i = 0; i < n; i++) {
        if(steps[i] == 'U') {
            level++;
            if(level == 0)
                valleys++;
        } else if(steps[i] == 'D') {
            level--;
        }
    }

    printf("%d\n", valleys);

    return 0;
}
