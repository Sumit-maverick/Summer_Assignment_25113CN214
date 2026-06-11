/*Write a program to Find pair with given sum.*/
#include <stdio.h>
int main()
{
    int n, sum;
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
    printf("Enter the sum to find pairs: ");
    if(scanf("%d", &sum) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Pairs with sum %d are:\n", sum);
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}