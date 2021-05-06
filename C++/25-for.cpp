#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0,i;

    cout << "Input a number: ";

    cin >> num;

    for(i=num; num!=0; num=num/10)
    {
        r=num % 10;
        sum=sum*10+r;
    }
    if(i==sum)
        cout << i <<" is a palindrome number.\n";
    else
        cout << i << " is not a palindrome number.\n";

}

