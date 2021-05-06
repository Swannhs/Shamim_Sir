#include <iostream>
using namespace std;

int main()
{
   int i, sum=0;
   cout << "The Numbers are: \n";
   for(i=101;i<200;i++)
   {
     if(i%9==0)
     {
       cout << " " << i;
       sum+=i;
     }
   }
   cout << ("\n\nThe sum : " << sum << "\n";
}
