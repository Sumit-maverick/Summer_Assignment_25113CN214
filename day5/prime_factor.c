#include<stdio.h>
int main()
{
    int n,f=-1,i;
    printf("Enter a number: "); 
    scanf("%d",&n);
    while(n%2==0){
        f=2;
        n/=2;
    }
    for(i=3;i*i<=n;i+=2){
        while(n%i==0){
            f=i;
            n/=i;
        }
    }
    if(n>2){
        f=n;
    }
    printf("Largest prime factor: %d\n", f);
    return 0;
    
}