/*Write a program to Reverse array. */
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
    printf("Reversed array is:\n");
    for(int i=size-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}