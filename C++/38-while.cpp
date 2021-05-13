#include <iostream>
using namespace std;

int main()
{
   int i, sum=0;
   cout << "The Numbers are: \n";
   i=101;
   while(i<200)
   {
     if(i%9==0)
     {
       cout << " " << i;
       sum+=i;
     }
     i++;
   }
   cout << "\n\nThe sum : " << sum << "\n";
}

