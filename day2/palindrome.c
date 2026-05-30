#include<stdio.h>
int main()
{
    int n,orginal, r, reverse = 0;
    printf("enter the number ");    
    scanf("%d", &n);
    orginal = n;
    while (n != 0)
    {
        r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    if (orginal == reverse)
    {
        printf("The given number is a palindrome\n");
    }
    else
    {
        printf("The given number is not a palindrome\n");
    }
    return 0;
}