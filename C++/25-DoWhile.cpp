#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0,i;

    cout << "Input a number: ";

    cin >> num;
    i=num;
    do
    {
        r=num % 10;
        sum=sum*10+r;
         num=num/10;
    }
    while(num!=0);
    if(i==sum)
        cout << i <<" is a palindrome number.\n";
    else
        cout << i << " is not a palindrome number.\n";

}

