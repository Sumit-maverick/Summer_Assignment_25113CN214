/*Write a program to Add matrices.*/
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrices: ");
    if(scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    printf("Enter elements for the first matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(scanf("%d", &matrix1[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Enter elements for the second matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(scanf("%d", &matrix2[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}