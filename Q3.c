#include <stdio.h>

int main() {
int sem, i, j, subjects;
int marks, max;

```
printf("Enter no of semester: ");
scanf("%d", &sem);

for(i = 1; i <= sem; i++) {

    printf("Enter no of subjects in %d semester: ", i);
    scanf("%d", &subjects);

    max = -1;

    printf("Marks obtained in semester %d: ", i);

    for(j = 1; j <= subjects; j++) {
        scanf("%d", &marks);

        if(marks < 0 || marks > 100) {
            printf("You have entered invalid mark.\n");
            return 0;
        }

        if(marks > max) {
            max = marks;
        }
    }

    printf("Maximum mark in %d semester: %d\n", i, max);
}

return 0;
```

}
