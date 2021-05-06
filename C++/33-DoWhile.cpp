#include <iostream>
using namespace std;

int main()
{
  int num, i = 1, sum, j;
  cout << "Enter a number \n";
  cin >> num;
  cout << "The perfect numbers between 1 and " << num << "are : \n";
  while (i <= num)
  {
    sum = 0;
    j = 1;
    while (j < i)
    {
      if (i % j == 0)
      {
        sum += j;
      }
      j++;
    }
    if (sum == i)
    {
      cout << i;
    }
    i++;
  }
}
