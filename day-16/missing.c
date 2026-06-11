/*Write a program to Find missing number in 
array*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    if(scanf("%d", &n)!=1 || n < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr[n-1];
    printf("Enter %d elements (from 1 to %d with one missing):\n", n-1, n);
    for(int i=0; i<n-1; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    int total_sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int arr_sum = 0;
    for(int i=0; i<n-1; i++) {
        arr_sum += arr[i];
    }
    int missing_number = total_sum - arr_sum;
    printf("The missing number is: %d\n", missing_number);
    return 0;
}
