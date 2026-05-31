
#include <stdio.h>      
int main()
{
    int n1,n2,gcd,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    gcd=n1;
    b=n2;
    while(b!=0)
    {
        c=gcd%b;
        gcd=b;
        b=c;
    }
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}