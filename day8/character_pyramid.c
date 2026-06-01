/*Write a program to print character pyramid. */
#include <stdio.h>

int main()
{
    int n, i, j;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the character to be printed: ");
    scanf(" %c", &ch);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
/*Output:
Enter the number of rows: 5
Enter the character to be printed: A
A 
A A
A A A
A A A A
A A A A A
*/