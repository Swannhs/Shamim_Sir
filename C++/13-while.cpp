#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin >> n;
    int k,count,sum=0;
    i=1;
    while(i<=n)
    {
        k=i;
        count = 0;
        j=2;
        while(j<i)
        {
            if(k%j == 0)
            {
                count++;
                break;
            }
            j++;
        }
        if(count == 0 && k>1)
        {
            sum=sum+k;
        }
        i++;
    }
    cout << "Summation of the prime numbers are : " << sum << "\n";
}

