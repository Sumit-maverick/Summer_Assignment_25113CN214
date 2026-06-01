/*Write a program to Recursive reverse number. */
#include<stdio.h>

int reverse(int n, int rev) {
    if (n == 0) {
        return rev;
    }
        rev= (n % 10) + (rev * 10);
        return reverse(n / 10, rev);
    }


int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int res=reverse(a, 0);
    printf("Reverse of %d is %d\n", a, res);
    return 0;
}