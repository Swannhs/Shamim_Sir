#include<stdio.h>
int main ()
{
  long int b, hexa = 0, j = 1, r,n;

  printf ("Enter a binary number: ");
  scanf ("%ld", &b);

  for(n=b;b!=0;b = b / 10)
    {
      r = b% 10;
      hexa = hexa+ r * j;
      j = j * 2;
    }

  printf ("Hexadecimal value is: %lX", hexa);

  return 0;
}
