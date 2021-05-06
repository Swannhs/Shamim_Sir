#include <iostream>
using namespace std;
int main()
{
  long int b, hexa = 0, j = 1, r, n;

  cout << "Enter a binary number: ";
  cin >> b;

  for (n = b; b != 0; b = b / 10)
  {
    r = b % 10;
    hexa = hexa + r * j;
    j = j * 2;
  }

  cout << "Hexadecimal value is: " << hexa;

  return 0;
}
