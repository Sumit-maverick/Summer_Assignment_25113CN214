/*Write a program to Find column-wise sum. */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrix: ");
    if(scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    int matrix[rows][cols];
    printf("Enter elements for the matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Column-wise sums:\n");
    for(int j=0; j<cols; j++) {
        int colSum = 0;
        for(int i=0; i<rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j+1, colSum);
    }
    return 0;
}