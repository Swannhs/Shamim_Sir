#include<iostream>
using namespace std;
int main()
{
    long int b, oct= 0, j = 1, r,n;

    cout << "Enter the value for  binary number: ";
    cin >> b;
    for (n=b;b!=0;b=b/10)
    {
        r = b % 10;
        oct = oct + r * j;
        j = j * 2;

    }
    cout <<"Equivalent octal value is: "<< oct;
}
