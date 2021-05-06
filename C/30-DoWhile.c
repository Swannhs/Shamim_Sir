#include <stdio.h>

void main()
{
    int i,n,r,sum=0;

    printf("Input  a number: ");
    scanf("%d",&n);
    i=n;
    do
    {
        r=n % 10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    while(n!=0);
    if(sum==i)
        printf("%d is an Armstrong number.\n",i);
    else
        printf("%d is not an Armstrong number.\n",i);

}


