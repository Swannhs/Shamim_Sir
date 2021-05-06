#include<stdio.h>
void main()
{
    int i,a,sum=0,avg;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    avg=sum/10;
    printf("sum = %d\n",sum);
    printf("avg = %d",avg);
}
