#include<stdio.h>
int factorial(int n)
{
    if (n<=0) return 0;
    if (n==1) return 1;

    int a=0,b=1,next;
    for (int i = 2; i <= n; i++)
    {
        next=a+b;
        a=b;
        b=next;
    }
    return b;
}
int main()
{
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("Fibonacci term at position %d is: %d\n", n, factorial(n));

    return 0;
}