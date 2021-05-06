#include<stdio.h>
void main()
{
    int i=1,n, fact=1;
      scanf("%d",&n);
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial = %d ",fact);
}


