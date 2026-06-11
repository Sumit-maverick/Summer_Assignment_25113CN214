/*Write a program to Frequency of an element. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, ele, count = 0;
    printf("Enter the size of the array: ");
    if(scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter the element to find its frequency: ");
    if(scanf("%d", &ele) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    for(i=0; i<n; i++) {
        if(arr[i] == ele) {
            count++;
        }
    }
    if(count > 0) {
        printf("Frequency of %d is: %d\n", ele, count);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
