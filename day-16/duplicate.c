/*Write a program to Remove duplicates from 
array.*/
#include <stdio.h>
int main()
{
    int n;
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
    int unique[n], unique_count = 0;
    for(int i=0; i<n; i++) {
        int duplicate = 0;
        for(int j=0; j<unique_count; j++) {
            if(arr[i] == unique[j]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            unique[unique_count++] = arr[i];
        }
    }
    printf("Array after removing duplicates:\n");
    for(int i=0; i<unique_count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}