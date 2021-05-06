#include<stdio.h>

void main()
{
    int n,i=152,r,sum,x;

    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Armstrong numbers are :\n");
    while(i<=n)
    {
        i++;
        x=i;
        sum=0;
        while(i!=0)
        {
            r=i%10;
            sum=sum+r*r*r;
            i=i/10;
        }
        if(sum==x)
        {
            printf("%d\n",x);
            n--;
        }
        i=x;
    }
}

