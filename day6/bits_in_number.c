/* Program to count the number of bits in a number */
#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    printf("Number of bits: %d\n", count);
    return 0;
}