#include<stdio.h>

void main()
{
  int num,i,sum,j;
  printf("Enter a number \n");
  scanf("%d",&num);
  printf("The perfect numbers between 1 and %d are: \n",num);
  for(i=1;i<=num;i++)
  {
    sum=0;
    for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
        sum+=j;
      }
    }
    if(sum==i)
    {
      printf("%d ",i);
    }
  }
}
