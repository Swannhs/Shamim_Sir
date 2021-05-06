#include <iostream>
using namespace std;

int main()
{
  int prv = 0, pre = 1, t, i, n;
  cin >> n;
  cout << "Fibonacci series upto  to " << n << " terms are : \n";
  cout << " " << prv << " " << pre;

  for (i = 3; i <= n; i++)
  {
    t = prv + pre;
    cout << " " << t;
    prv = pre;
    pre = t;
  }
}
