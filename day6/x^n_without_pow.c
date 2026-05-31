/* Program to calculate x raised to the power n without using pow() function */
#include<stdio.h>
int main()
{
    int x, n, i, r = 1;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        r *= x;
    }
    printf("%d raised to the power %d is %d\n", x, n, r);
    return 0;
}