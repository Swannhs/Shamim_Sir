#include<stdio.h>
int main ()
{
  long int b, hexa = 0, j = 1, r;

  printf ("Enter a binary number: ");
  scanf ("%ld", &b);

  while (b!= 0)
    {
      r = b% 10;
      hexa = hexa+ r * j;
      j = j * 2;
      b = b / 10;
    }

  printf ("Hexadecimal value is: %lX", hexa);

  return 0;
}
