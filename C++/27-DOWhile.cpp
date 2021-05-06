#include<iostream>
using namespace std;
int main()
{
    int n, num = 0;

    cout << "Enter any number to print in words: ";
    cin >> n;

    do
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    while(n != 0);

    do
    {
        switch(num % 10)
        {
            case 0:
                cout << "Zero";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two ";
                break;
            case 3:
                cout << "Three";
                break;
            case 4:
                cout << "Four";
                break;
            case 5:
                cout << "Five";
                break;
            case 6:
                cout << "Six";
                break;
            case 7:
                cout << "Seven";
                break;
            case 8:
                cout << "Eight";
                break;
            case 9:
                cout << "Nine";
                break;
        }

        num = num / 10;
    }
    while(num != 0);

    return 0;
}

