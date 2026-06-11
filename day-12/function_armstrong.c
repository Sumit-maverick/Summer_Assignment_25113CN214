/*Write a program to Write function for 
armstrong number. */
#include <stdio.h>
int Armstrong(int num)
{
    int original = num, sum = 0, remainder;
    while (num > 0)
    {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }
    return original == sum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}