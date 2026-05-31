#include<stdio.h>
int main()
{
    int a,b,temp,i,r,d,sum=0;
    printf("Enter the range: ");

    scanf("%d %d",&a,&b);

    printf("Armstrong numbers between %d and %d are: ", a, b);

    for(i=a;i<=b;i++)
    {
        temp=i;
        sum=0;
        d=0;
        while(temp!=0)
        {
            temp/=10;
            d++;

        }
         
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum+=pow(r,d);
            temp/=10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;   
}