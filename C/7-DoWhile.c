#include<stdio.h>
void main()
{
    int i=1,n, fact=1;
      scanf("%d",&n);
    do
    {
        fact = fact*i;
        i++;
    }
    while(i<=n);
    printf("Factorial = %d ",fact);
}



