#include<iostream>
#include <math.h>
using namespace std;

int main() {
    long OctalNum, DeciNum=0;
    int p, digit;

    cout << "Enter an Octal Number\n";
    cin >> OctalNum;

    for(p=0;OctalNum!=0;p++) {

        digit = OctalNum%10;
        DeciNum += digit*pow(8, p);

        OctalNum /= 10;
    }

    cout << "Decimal Number is : " << DeciNum;

    return 0;
}
