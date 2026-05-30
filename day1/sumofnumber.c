#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("enter the number of terms to be entered ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("The sum of first %d natural number is =%d\n", n, s);
    return 0;
}