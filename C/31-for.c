#include<stdio.h>

void main()
{
    int n,i,r,sum,x;

    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Armstrong numbers are :\n");
    for(i=152;i<=n;i++)
    {
        x=i;
        sum=0;
        for(;i!=0;i=i/10)
        {
            r=i%10;
            sum=sum+r*r*r;
        }
        if(sum==x)
        {
            printf("%d\n",x);
            n--;
        }
        i=x;
    }
}
