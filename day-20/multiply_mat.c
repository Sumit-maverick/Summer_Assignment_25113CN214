/*Write a program to Multiply matrices. */
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns for the first matrix: ");
    if(scanf("%d %d", &rows1, &cols1) != 2 || rows1 < 1 || cols1 < 1) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    int matrix1[rows1][cols1];
    printf("Enter elements for the first matrix:\n");
    for(int i=0; i<rows1; i++) {
        for(int j=0; j<cols1; j++) {
            if(scanf("%d", &matrix1[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Enter the number of rows and columns for the second matrix: ");
    if(scanf("%d %d", &rows2, &cols2) != 2 || rows2 < 1 || cols2 < 1) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }
    if(cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }
    int matrix2[rows2][cols2];
    printf("Enter elements for the second matrix:\n");
    for(int i=0; i<rows2; i++) {
        for(int j=0; j<cols2; j++) {
            if(scanf("%d", &matrix2[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    int product[rows1][cols2];
    for(int i=0; i<rows1; i++) {
        for(int j=0; j<cols2; j++) {
            product[i][j] = 0;
            for(int k=0; k<cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for(int i=0; i<rows1; i++) {
        for(int j=0; j<cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}