#include <iostream>
using namespace std;
int main()
{
    int i, j, num, count;

    cin >> num;

    cout << "All Prime Factors of " << num << " are: \n";
    i = 2;
    do
    {
        if (num % i == 0)
        {
            count++;
            j = 2;
            while (j <= i / 2)
            {
                if (i % j == 0)
                {
                    count = 0;
                    break;
                }
                j++;
            }

            if (count > 0)
            {
                cout << " " << i;
            }
        }
        i++;
    } while (i <= num);

    return 0;
}
