#include <stdio.h>

#define N 3  

void rotate90Clockwise(int matrix[N][N]) {
    int temp[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            temp[j][N - 1 - i] = matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matrix[i][j] = temp[i][j];
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate90Clockwise(matrix);

    printf("Rotated Matrix:\n");
    printMatrix(matrix);

    return 0;
}
