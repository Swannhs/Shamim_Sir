#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b,count;
    cin >> a >> b;
    i=a;
    int n;
    do
    {
        n=i;
        count = 0;
        j=2;
        while(j<n)
        {
            if(n%j == 0)
            {
                count++;
                break;
            }
            j++;
        }
        if(count == 0 && i>1)
        {
            cout << i << " is a  prime number\n";
        }
        i++;
    }
    while(i<=b);
}

