#include<iostream>
using namespace std;

int main()
{
    int n,i=152,r,sum,x;

    cout << "Enter a number\n";
    cin >> n;
    cout <<"Armstrong numbers are :\n";
    while(i<=n)
    {
        i++;
        x=i;
        sum=0;
        while(i!=0)
        {
            r=i%10;
            sum=sum+r*r*r;
            i=i/10;
        }
        if(sum==x)
        {
            cout << x << "\n";
            n--;
        }
        i=x;
    }
}

