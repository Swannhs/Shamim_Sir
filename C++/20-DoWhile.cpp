#include<iostream>
#include <math.h>
#define BASE 2
using namespace std;

int main()
{
    long long b, d=0, tempbi;
    int N=0;

    cout << "Enter any binary number: ";
    cin >> b;

    tempbi = b;

    do
    {

        if(tempbi % 10 == 1)
        {
            d += pow(BASE, N);
        }

        N++;
        tempbi /= 10;
    }
    while(tempbi!=0);

    cout << "Decimal number is = "<< d;

    return 0;
}

