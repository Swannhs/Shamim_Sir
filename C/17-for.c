#include<stdio.h>
void main()
{
    int i,n,pro=1,m;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n; n>0; n=n/10)
    {
        m=n%10;
        pro=pro*m;
    }
    printf("Sum is=%d",pro);
}
