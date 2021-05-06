#include <iostream>
#include <string.h>
#include "stdio.h"
#define SIZE 8
using namespace std;


int main()
{
    char b[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, c=1;

    cout << "Enter " << SIZE << " bit binary value: ";

// gets is not working in c++
    // gets(b);
    i=0;

   do
    {
        if(b[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(b[i] == '0')
        {
            onesComp[i] = '1';
        }
        i++;
    }
     while(i<SIZE);
    onesComp[SIZE] = '\0';
    i=SIZE-1;

    do
    {
        if(onesComp[i] == '1' && c == 1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i] == '0' && c == 1)
        {
            twosComp[i] = '1';
            c = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
        i--;
    }
    while( i>=0);
    twosComp[SIZE] = '\0';

    cout << "Original binary = "<< b <<"\n";
    cout << "Ones complement = "<< onesComp <<"\n";
    cout << "Twos complement = "<< twosComp <<"\n";

    return 0;
}

