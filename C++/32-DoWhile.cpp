#include<iostream>
using namespace std;

int main()
{
    int n,i=1,sum=0;

    cout << "Enter a number: ";
    cin >> n;

    do
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    while(i<n);
    if(sum==n)
        cout << i << " is a perfect number";
    else
        cout << i << " is not a perfect number";

}


