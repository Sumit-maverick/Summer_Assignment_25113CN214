/*Write a program to Linear search.*/
#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int t,f=0,i;
    printf("Enter the element to search: ");
    scanf("%d", &t);
    for(i=0; i<5; i++)
    {
        if(arr[i] == t)
        {
            printf("Element found at index %d\n", i);
            f=1;
            break;
        }
    }    if(f==0)
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}