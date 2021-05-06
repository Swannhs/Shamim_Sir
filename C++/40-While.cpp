#include <iostream>
#include <math.h>
using namespace std;
int main()
{
      int f1,f2,f3,n,i=2,s=1;
      f1=0;
      f2=1;
      cin >> n;
      while(i<n)
      {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            s=s+f3;
            i++;
      }
      cout << "Sum of %d terms of Fibonacci Series is :" << n << s;
      return 0;
}

