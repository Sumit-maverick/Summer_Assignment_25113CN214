/* write a program to recursive fibonacci */
#include<stdio.h>

int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n,i;
    printf("Enter a number: ");
    if(scanf("%d", &n)!=1 || n < 0){
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Fibonacci Series:");
    for(i=0; i<n; i++){
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
