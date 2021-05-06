#include <iostream>
using namespace std;

int main()
{
    int prv = 0, pre = 1, t, i, n;
    cin >> n;
    cout << "Fibonacci series upto  to " << n << " terms are : \n";
    cout << " " << prv << " " << pre;
    i = 3;

    do
    {
        t = prv + pre;
        cout << " " << t;
        prv = pre;
        pre = t;
        i++;
    } while (i <= n);
}
