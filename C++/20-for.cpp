#include<iostream>
#include <math.h>
#define BASE 2
using namespace std;

int main()
{
    long long b, d=0, tempbi;
    int n=0;

    cout << "Enter any binary number: ";
    cin >> b;

    for(tempbi=b;tempbi!=0;tempbi /= 10)
    {

        if(tempbi % 10 == 1)
        {
            d += pow(BASE, n);
        }

        n++;

    }

    cout << "Decimal number is = " << d;

    return 0;
}
