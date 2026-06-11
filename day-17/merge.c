/*Write a program to Merge arrays. */
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the size of the first array: ");
    if(scanf("%d", &n1)!=1 || n1 < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for(int i=0; i<n1; i++) {
        if(scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter the size of the second array: ");
    if(scanf("%d", &n2)!=1 || n2 < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for(int i=0; i<n2; i++) {
        if(scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    int merged[n1 + n2];
    for(int i=0; i<n1; i++) {
        merged[i] = arr1[i];
    }
    for(int i=0; i<n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    printf("Merged array:\n");
    for(int i=0; i<n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}