#include <stdio.h>

int main() {
int a, b, c, limit;

```
printf("Enter the limit: ");
scanf("%d", &limit);

for (a = 1; a <= limit; a++) {
    for (b = 1; b <= limit; b++) {
        for (c = 1; c <= limit; c++) {
            if (a*a + b*b == c*c) {
                printf("%d %d %d\n", a, b, c);
            }
        }
    }
}

return 0;
```
}
