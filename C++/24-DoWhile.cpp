#include<iostream>
using namespace std;
int main() {
    int n, rev = 0, rem;
    cin >>n;
    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    while (n != 0);
    cout << "Reversed number is = " << rev;
    return 0;
}
