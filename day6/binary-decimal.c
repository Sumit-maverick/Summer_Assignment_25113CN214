/* Program to convert binary number to decimal */
#include<stdio.h>
int main()
{
    int b, d = 0, i = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    while(b != 0)
    {
        remainder = b % 10;
        d += remainder * i;
        b /= 10;
        i *= 2;
    }
    printf("Decimal number: %d\n", d);
    return 0;
}