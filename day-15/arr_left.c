/*Write a program to Rotate array left. */
#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter the size of the array: ");
    if(scanf("%d", &n)!=1 || n < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter the number of positions to rotate left: ");
    if(scanf("%d", &d) != 1 || d < 0) {
        printf("Invalid input. Number of positions must be a non-negative integer.\n");
        return 1;
    }
    d = d % n; // Handle cases where d is greater than n
    printf("Array after rotating left by %d positions:\n", d);
    for(int i=d; i<n; i++) {
        printf("%d ", arr[i]);
    }
    for(int i=0; i<d; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}