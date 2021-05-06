#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)
        cout << i << " is a perfect number";
    else
        cout << i << " is not a perfect number";
}
