/*Write a program to Find sum and average of 
array.*/
#include <stdio.h>
int main()
{
    int size, sum = 0;
    float avg;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / size;

    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f\n", avg);
    return 0;
}