#include <iostream>
using namespace std;
int main()
{
    int i, j, a, b;
    cin >> a >> b;
    int n;
    for (i = a; i <= b; i++)
    {
        n = i;
        int count = 0;
        for (j = 2; j < i; j++)
        {
            if (n % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && i > 1)
        {
            cout << i << "%d is a  prime number\n";
        }
    }
}
