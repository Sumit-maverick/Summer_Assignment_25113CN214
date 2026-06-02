#include<stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("enter the number ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    printf("The sum of digits in the given number is =%d\n", sum);
    return 0;
}