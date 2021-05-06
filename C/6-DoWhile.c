#include<stdio.h>
void main()
{
    int i=1,a,sum=0,avg;
    do
    {
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    while(i<=10);
    avg=sum/10;
    printf("sum = %d\n",sum);
    printf("avg = %d",avg);
}




