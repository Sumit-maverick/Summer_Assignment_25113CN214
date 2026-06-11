/*Write a program to Second largest element. */
#include <stdio.h>
int main()
{
    
   int size;
    printf("Enter the size of the array: ");
    if(scanf("%d", &size)!=1 || size < 2) {
        printf("Invalid input. Size must be an integer greater than 1.\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i=0; i<size; i++) 
        scanf("%d", &arr[i]);
        int largest = arr[0], second_largest = arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if(second_largest == largest) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    return 0;
}

