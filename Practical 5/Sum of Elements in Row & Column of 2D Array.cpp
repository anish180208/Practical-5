#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Row selection and sum
    int r, row_sum = 0;
    printf("\nEnter row number: ");
    scanf("%d", &r);

    printf("Elements of row %d: ", r);
    for (int j = 0; j < cols; j++) {
        printf("%d", a[r][j]);
        if (j < cols - 1) printf(", ");
        row_sum += a[r][j];
    }
    printf("\nThe sum of a row %d: %d\n\n", r, row_sum);

    // Column selection and sum
    int c, col_sum = 0;
    printf("Enter column number: ");
    scanf("%d", &c);

    printf("Elements of column %d: ", c);
    for (int i = 0; i < rows; i++) {
        printf("%d", a[i][c]);
        if (i < rows - 1) printf(", ");
        col_sum += a[i][c];
    }
    printf("\nThe sum of column %d: %d\n", c, col_sum);

    return 0;
}
