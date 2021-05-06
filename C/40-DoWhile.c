#include <stdio.h>
#include <math.h>
int main()
{
      int f1,f2,f3,n,i=2,s=1;
      f1=0;
      f2=1;
      scanf("%d",&n);
      do
      {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            s=s+f3;
            i++;
      }
      while(i<n);
      printf("Sum of %d terms of Fibonacci Series is : %d",n,s);
      return 0;
}


