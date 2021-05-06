#include<stdio.h>
void main()
{
    int n,pro=1,m;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        m=n%10;
        pro=pro*m;
        n=n/10;
    }
    while(n>0);
    printf("product of digits is =%d",pro);
}


