#include <iostream>
#include <math.h>
using namespace std;
int main()
{
      int f1,f2,f3,n,i,s=1;
      f1=0;
      f2=1;
      cin >> n;
      for(i=2;i<n;i++)
      {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            s=s+f3;
      }
      cout << "Sum of %d terms of Fibonacci Series is :" << n << s;
      return 0;
}
