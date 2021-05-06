#include<stdio.h>
void main()
{
    int i=1,a,sum=0,avg;
    while(i<=10)
    {
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
   avg=sum/10;
    printf("sum = %d\n",sum);
    printf("avg = %d",avg);
}



