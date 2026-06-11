/*Write a program to Intersection of arrays. */
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
    int intersection[n1 < n2 ? n1 : n2], intersection_count = 0;
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            if(arr1[i] == arr2[j]) {
                int duplicate = 0;
                for(int k=0; k<intersection_count; k++) {
                    if(arr1[i] == intersection[k]) {
                        duplicate = 1;
                        break;
                    }
                }
                if(!duplicate) {
                    intersection[intersection_count++] = arr1[i];
                }
                break;
            }
        }
    }
    printf("Intersection of the two arrays:\n");
    for(int i=0; i<intersection_count; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
    if(intersection_count == 0) {
        printf("No common elements found.\n");
    }
    return 0;
}