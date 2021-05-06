#include<iostream>
using namespace std;
int main()
{
    int i,n,pro=1,m;
    cout <<"Enter a number:";
    cin >>n;
    for(i=n; n>0; n=n/10)
    {
        m=n%10;
        pro=pro*m;
    }
    cout << "Sum is = " << pro;
}
