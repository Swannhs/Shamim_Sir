#include<iostream>
using namespace std;

int main()
{
    long int b, oct= 0, j = 1, r;

    cout << "Enter the value for  binary number: ";
    cin >> b;
    do
    {
        r = b % 10;
        oct = oct + r * j;
        j = j * 2;
        b = b / 10;
    }
    while (b != 0);
    cout <<"Equivalent octal value: "<< oct;
}


