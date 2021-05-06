#include<stdio.h>

void main()
{
  int num,i=1,sum,j;
  printf("Enter a number \n");
  scanf("%d",&num);
  printf("The perfect numbers between 1 and %d are : \n",num);
  while(i<=num)
  {
    sum=0;
    j=1;
    while(j<i)
    {
      if(i%j==0)
      {
        sum+=j;
      }
      j++;
    }
    if(sum==i)
    {
      printf("%d ",i);
    }
    i++;

  }
}


