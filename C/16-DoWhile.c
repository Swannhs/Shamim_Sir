#include<stdio.h>
void main()
{
    int n,sum=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    while(n>0);
    printf("Sum of digits is =%d",sum);
}
