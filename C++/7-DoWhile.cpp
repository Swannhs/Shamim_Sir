#include<iostream>
using namespace std;
int main()
{
    int i=1,n, fact=1;

    cin >> n;
    do
    {
        fact = fact*i;
        i++;
    }
    while(i<=n);
    cout << "Factorial = " << fact;
}