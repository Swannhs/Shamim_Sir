#include<iostream>
using namespace std;

int main()
{
    int i,n,r,sum=0;

    cout << "Input  a number: ";
    cin >> n;
    i=n;
    while(n!=0)
    {
        r=n % 10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==i)
        cout << i <<" is an Armstrong number.\n";
    else
        cout << i << " is not an Armstrong number.\n";

}

