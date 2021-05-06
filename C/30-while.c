#include <stdio.h>

void main()
{
    int i,n,r,sum=0;

    printf("Input  a number: ");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n % 10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==i)
        printf("%d is an Armstrong number.\n",i);
    else
        printf("%d is not an Armstrong number.\n",i);

}

