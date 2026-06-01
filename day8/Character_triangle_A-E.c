/*Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE 
*/
#include <stdio.h>
int main()
{
    int rows,i,j;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++)
    {
        ch = 'A'; // Reset character to 'A' at the start of each row
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch );
                ch++;
        }
        printf("\n");
    }
    return 0;
}
/*Output:
Enter the number of rows: 5
A
A B
A B C
A B C D
A B C D E
*/
