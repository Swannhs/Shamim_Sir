#include<iostream>
using namespace std;
int main()
{
    int i=1,a,sum=0,avg;
    while(i<=10)
    {
        cin >> a;
        sum=sum+a;
        i++;
    }
   avg=sum/10;

   cout << "sum = " << sum << "\n";
   cout << "avg = " << avg;
}



