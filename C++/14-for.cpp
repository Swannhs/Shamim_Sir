#include <iostream>
using namespace std;
int main()
{
    int i, j, num, count;

    cin >> num;

    cout << "All Prime Factors of " << num << " are: \n";

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    count = 0;
                    break;
                }
            }

            if (count > 0)
            {
                cout << " " << i;
            }
        }
    }

    return 0;
}
