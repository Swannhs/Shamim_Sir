#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,m;
    cout << "Enter a number: ";
    cin >> n;
    do
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    while(n>0);
    cout <<"Sum of digits is = " << sum;
}
