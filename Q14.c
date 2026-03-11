#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    int identical = 1;
    for (int i = 0; i < rows && identical; i++)
        for (int j = 0; j < cols && identical; j++)
            if (A[i][j] != B[i][j])
                identical = 0;

    if (identical)
        printf("Matrices are identical\n");
    else
        printf("Matrices are not identical\n");

    return 0;
}
