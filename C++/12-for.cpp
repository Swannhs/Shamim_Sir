#include <iostream>
using namespace std;
int main()
{
    int i, j, n, count, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = i;
        count = 0;
        for (j = 2; j < i; j++)
        {
            if (k % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && k > 1)
        {
            cout << i << " is a  prime number\n";
        }
    }
}
