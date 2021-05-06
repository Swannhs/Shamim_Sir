#include<iostream>
using namespace std;
int main()
{
    int i=2,n,count = 0;
    cin >> n;
    do
    {
        if(n%i == 0)
        {
            count++;
            break;
        }
        i++;
    }
    while(i<n);
    if(count == 0)
    {
        cout << n << " is a  prime number";
    }
    else
    {
        cout << n << " is a  prime number";
    }
}





