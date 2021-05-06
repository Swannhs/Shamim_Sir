#include<iostream>
using namespace std;
int main ()
{
    long int b, hexa = 0, j = 1, r;

    cout << "Enter a binary number: ";
    cin >> b;

    do
    {
        r = b% 10;
        hexa = hexa+ r * j;
        j = j * 2;
        b = b / 10;
    }
    while (b!= 0);

    cout << "Hexadecimal value is: " << hexa;

    return 0;
}

