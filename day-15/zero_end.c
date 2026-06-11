/*Write a program to Move zeroes to end. */
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    if(scanf("%d", &size)!=1 || size < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i=0; i<size; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    int count = 0; 
    for(int i=0; i<size; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i]; 
        }
    }
    while(count < size) {
        arr[count++] = 0; 
    }
    printf("Array after moving zeroes to the end:\n");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}