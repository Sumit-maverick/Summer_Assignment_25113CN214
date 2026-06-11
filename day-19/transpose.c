/*Write a program to Transpose matrix. */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrix: ");
    if(scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    int matrix[rows][cols], transpose[cols][rows];
    printf("Enter elements for the matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i=0; i<cols; i++) {
        for(int j=0; j<rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}