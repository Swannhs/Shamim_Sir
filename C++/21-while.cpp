#include<iostream>
using namespace std;
int main ()
{
  long int b, hexa = 0, j = 1, r;

  cout << "Enter a binary number: ";
  cin >> b;

  while (b!= 0)
    {
      r = b% 10;
      hexa = hexa+ r * j;
      j = j * 2;
      b = b / 10;
    }

  cout <<"Hexadecimal value is: " << hexa;

  return 0;
}
