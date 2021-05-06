#include<iostream>
using namespace std;
int main()
{
    int i=1,a,sum=0;
    do
    {
        cin >> a;
        sum=sum+a;
        i++;
    }
    while(i<=3);
    cout << sum;
}
