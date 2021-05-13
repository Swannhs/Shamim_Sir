#include <iostream>
using namespace std;

int main()
{
    int n,r,sum=0,t;

    cout << "Input a number: ";
    cin >> n;
    t=n;
    while(n!=0)
    {
        r=n % 10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum)
        cout << t << " is a palindrome number.\n";
    else
        cout << t << " is not a palindrome number.\n";

}
