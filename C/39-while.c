#include <stdio.h>

void main()
{
    int prv=0,pre=1,t,i,n;
    scanf("%d",&n);
    printf("Fibonacci series upto  to %d terms are : \n",n);
    printf("% 5d % 5d", prv,pre);
    i=3;

    while(i<=n)
    {
        t=prv+pre;
        printf("% 5d",t);
        prv=pre;
        pre=t;
        i++;
    }
}

