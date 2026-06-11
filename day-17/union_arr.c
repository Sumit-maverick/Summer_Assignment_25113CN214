/*Write a program to Union of arrays*/
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the size of the first array: ");
    if(scanf("%d", &n1)!=1 || n1 < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for(int i=0; i<n1; i++) {
        if(scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter the size of the second array: ");
    if(scanf("%d", &n2)!=1 || n2 < 1) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for(int i=0; i<n2; i++) {
        if(scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    int union_arr[n1 + n2], union_count = 0;
    for(int i=0; i<n1; i++) {
        int duplicate = 0;
        for(int j=0; j<union_count; j++) {
            if(arr1[i] == union_arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            union_arr[union_count++] = arr1[i];
        }
    }
    for(int i=0; i<n2; i++) {
        int duplicate = 0;
        for(int j=0; j<union_count; j++) {
            if(arr2[i] == union_arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            union_arr[union_count++] = arr2[i];
        }
    }
    printf("Union of the two arrays:\n");
    for(int i=0; i<union_count; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");
    return 0;
}