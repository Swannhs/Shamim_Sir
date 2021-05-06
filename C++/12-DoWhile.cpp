#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n, count, k;
    cin >> n;
    do
    {
        k = i;
        count = 0;
        j = 2;
        while (j < i)
        {
            if (k % j == 0)
            {
                count++;
                break;
            }
            j++;
        }
        i++;
        if (count == 0 && k > 1)
        {
            cout << k << " is a  prime number\n";
        }
    } while (i <= n);
}
