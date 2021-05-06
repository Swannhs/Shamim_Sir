#include<iostream>
using namespace std;
int main() {
    int i,n, rev = 0, rem;
    cout <<"Enter an integer: ";
    cin >> n;
    for(i=n;n!= 0;n/=10)
        {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    cout << "Reversed number is = " << rev;
    return 0;
}
