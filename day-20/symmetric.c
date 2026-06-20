/*Write a program to Check symmetric matrix. */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrix: ");
    if(scanf("%d %d", &rows, &cols) != 2 || rows < 1 || cols < 1) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    if(rows != cols) {
        printf("Matrix is not symmetric. It must be a square matrix.\n");
        return 0;
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
    int isSymmetric = 1;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}