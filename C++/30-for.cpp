#include <iostream>
using namespace std;

int main()
{
     int i, n, r, sum = 0;

     cout << "Input  a number: ";
     cin >> n;

     for (i = n; n != 0; n = n / 10)
     {
          r = n % 10;
          sum = sum + (r * r * r);
     }
     if (sum == i)
          cout << i << " is an Armstrong number.\n";
     else
          cout << i << " is not an Armstrong number.\n";
}
