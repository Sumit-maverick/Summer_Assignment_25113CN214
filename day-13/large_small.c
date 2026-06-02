/*Write a program to Find largest and smallest 
element. */
#include <stdio.h>
int main()
{
    int size, large, small;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            large = small = arr[i];
        }
        else
        {
            if (arr[i] > large)
                large = arr[i];
            if (arr[i] < small)
                small = arr[i];
        }
    }

    printf("The largest element is: %d\n", large);
    printf("The smallest element is: %d\n", small);
    return 0;
}