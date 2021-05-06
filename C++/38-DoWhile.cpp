#include <iostream>
using namespace std;

int main()
{
    int i, sum=0;
    printf("The Numbers are: \n");
    i=101;
    do
    {
        if(i%9==0)
        {
            cout << " " << i;
            sum+=i;
        }
        i++;
    }
    while(i<200);
    cout << "\n\n The sum : " << sum << "\n";
}


