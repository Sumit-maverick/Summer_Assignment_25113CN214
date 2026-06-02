/*Write a program to Write function to find 
maximum. */
#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int n1, n2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    result = max(n1, n2);
    printf("The maximum of %d and %d is: %d\n", n1, n2, result);
    return 0;
}