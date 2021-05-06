#include <iostream>
using namespace std;

int main(){
    int n,r,sum=0,t;

    cout << "Input a number: ";
    cin >> n;

    for(t=n;n!=0;n=n/10){
         r=n % 10;
         sum=sum*10+r;
    }
    if(t==sum)
        cout << t << " is a palindrome number.\n";
    else
        cout << t << " is not a palindrome number.\n";

}
