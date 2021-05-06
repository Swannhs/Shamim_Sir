#include<iostream>
using namespace std;
int main()
{
    int i=1,n, fact=1;
      scanf("%d",&n);
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial = %d ",fact);
}


