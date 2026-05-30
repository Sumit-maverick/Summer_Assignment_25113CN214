#include<stdio.h>
int main()
{
    int n,r,product=1;
    printf("enter the number ");   
    scanf("%d",&n);
    while (n != 0)
    {
        r = n % 10;
        product *= r;
        n /= 10;
    }
    printf("The product of digits in the given number is =%d\n", product);
    return 0;
}