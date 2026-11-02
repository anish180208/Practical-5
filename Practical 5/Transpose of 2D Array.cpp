#include <stdio.h>

int main() {
    int size;

    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int a[size][size];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Swapping row index with column index prints the transpose
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
