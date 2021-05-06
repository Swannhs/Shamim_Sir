#include<iostream>
using namespace std;
int main()
{
    int i,a,sum=0,avg;
    for(i=1;i<=10;i++)
    {
        cin >> a;
        sum=sum+a;
    }
    avg=sum/10;
    cout << "sum = " << sum << "\n";
    cout << "avg = " << avg;
}
