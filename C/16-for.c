#include<stdio.h>
 void main()
{
int i,n,sum=0,m;
printf("Enter a number:");
scanf("%d",&n);
for(i=n;n>0;n=n/10)
{
m=n%10;
sum=sum+m;
}
printf("Sum is=%d",sum);
return 0;
}
