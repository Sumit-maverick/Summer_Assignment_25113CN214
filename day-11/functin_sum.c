/*Write a program to Write function to find sum 
of two numbers. */
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int n1, n2,result;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    result = sum(n1, n2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
