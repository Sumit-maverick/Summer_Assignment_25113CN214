/*Write a program to Find string length 
without strlen().*/
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    if(scanf("%99s", str) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}