#include <iostream>
using namespace std;

int main()
{
  int i, j, n;
  cout << "Input number of rows : ";
  cin >> n;
  i = 0;
  do
  {
    for (j = 1; j <= n - i; j++)
      cout << " ";
    for (j = 1; j <= i; j++)
      cout << j;

    for (j = i - 1; j >= 1; j--)
      cout << j;
    cout << "\n";
    i++;
  } while (i <= n);
}
