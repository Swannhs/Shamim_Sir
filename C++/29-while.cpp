#include<iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf=1,gcd;

    cin >> n1 >> n2;

    j = (n1<n2) ? n1 : n2;

    i=1;

    while(i<=j)
    {

        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
         i++;
    }

        gcd =n1*n2/hcf;

    cout << "\n GCD of " << n1 << "and " << n2 << "is " << gcd;
}


