#include <stdio.h>

void main()
{
   int i,j,n;
   printf("Input number of rows : ");
   scanf("%d",&n);
   i=0;
   do
   {
     for(j=1;j<=n-i;j++)
	printf(" ");
     for(j=1;j<=i;j++)
       printf("%d",j);

       for(j=i-1;j>=1;j--)
	  printf("%d",j);

     printf("\n");
     i++;
   }
   while(i<=n);
}


