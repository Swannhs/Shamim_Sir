#include<stdio.h>

void main()
{
    int n,i,r,sum,x;

    cout << "Enter a number\n";
    cin >> n;
    cout <<"Armstrong numbers are :\n";
    
    for(i=152;i<=n;i++)
    {
        x=i;
        sum=0;
        for(;i!=0;i=i/10)
        {
            r=i%10;
            sum=sum+r*r*r;
        }
        if(sum==x)
        {
            cout << x << "\n";
            n--;
        }
        i=x;
    }
}
