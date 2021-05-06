#include<iostream>
#include <math.h>
using namespace std;
int main() {
    long OctalNum, DeciNum=0;
    int p=0, digit;

    cout << "Enter an Octal Number\n";
    cin >>OctalNum;

    while(OctalNum!=0) {

        digit = OctalNum%10;
        DeciNum += digit*pow(8, p);

        p++;
        OctalNum /= 10;
    }

    cout << "Decimal Number is : " << DeciNum;

    return 0;
}

