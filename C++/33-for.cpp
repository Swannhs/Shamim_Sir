#include<iostream>
using namespace std;

int main()
{
  int num,i,sum,j;
  cout << "Enter a number \n";
  cin >> num;
  cout << "The perfect numbers between 1 and " << num << "are : \n";
  for(i=1;i<=num;i++)
  {
    sum=0;
    for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
        sum+=j;
      }
    }
    if(sum==i)
    {
      cout << i;
    }
  }
}
