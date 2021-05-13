#include<iostream>
using namespace std;

int main
{
    int n,pro=1,m;
    cout << "Enter a number:";
    cin >> n;
    while(n>0)
    {
        m=n%10;
        pro=pro*m;
        n=n/10;
    }
    cout << "product of digits is ="<< pro;
}

