#include <stdio.h>

void main()
{
   int i, sum=0;
   printf("The Numbers are: \n");
   for(i=101;i<200;i++)
   {
     if(i%9==0)
     {
       printf("% 5d",i);
       sum+=i;
     }
   }
   printf("\n\nThe sum : %d \n",sum);
}
