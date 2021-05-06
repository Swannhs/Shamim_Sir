#include<iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf=1;

    cin >> n1 >> n2;

    j = (n1<n2) ? n1 : n2;

    i=1;
    do
    {

        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
         i++;
    }
        while(i<=j);

    cout << "\n HCF of " << n1 << "and " << n2 << "is " << hcf;
}


