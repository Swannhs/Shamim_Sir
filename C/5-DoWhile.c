#include<stdio.h>
void main()
{
    int i=1,a,sum=0;
    do
    {
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    while(i<=3);
    printf("%d",sum);
}
