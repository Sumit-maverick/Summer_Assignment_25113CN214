/*Write a program to Write function to find 
factorial*/
#include <stdio.h>
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1; 
    else
        return num * fact(num - 1); 
}
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = fact(num);
    printf("The factorial of %d is: %d\n", num, result);
    return 0;
}