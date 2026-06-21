/*Write a program to Reverse a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    if(scanf("%99s", str) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int length = strlen(str);
    for(int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}