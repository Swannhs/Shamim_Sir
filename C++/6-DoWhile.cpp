#include<iostream>
using namespace std;
int main()
{
    int i=1,a,sum=0,avg;
    do
    {
        cin >> a;
        sum=sum+a;
        i++;
    }
    while(i<=10);
    avg=sum/10;
    cout << "sum = " << sum << "\n";
    cout << "avg = " << avg;
}




