/*Write a program to Find duplicates in array.*/
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size < 1)
    {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Duplicate elements in the array are:\n");
    int found_duplicate = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                found_duplicate = 1;
                break;
            }
        }
    }
    if (!found_duplicate)
    {
        printf("No duplicates found in the array.\n");
    }
    return 0;
}