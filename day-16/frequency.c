/*Write a program to Find maximum frequency 
element. */
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
    int max_freq = 0, max_freq_element = arr[0];
    for(int i=0; i<n; i++) {
        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > max_freq) {
            max_freq = count;
            max_freq_element = arr[i];
        }
    }
    printf("The element with maximum frequency is: %d (Frequency: %d)\n", max_freq_element, max_freq);
    return 0;
}