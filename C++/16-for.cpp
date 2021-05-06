#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0, m;
    cout << "Enter a number: ";
    cin >> n;
    for (i = n; n > 0; n = n / 10)
    {
        m = n % 10;
        sum = sum + m;
    }
    cout << "Sum is = " << sum;
    return 0;
}
