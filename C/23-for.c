#include <stdio.h>
#include <math.h>

int main() {
    long OctalNum, DeciNum=0;
    int p, digit;

    printf("Enter an Octal Number\n");
    scanf("%ld", &OctalNum);

    for(p=0;OctalNum!=0;p++) {

        digit = OctalNum%10;
        DeciNum += digit*pow(8, p);

        OctalNum /= 10;
    }

    printf("Decimal Number is : %ld", DeciNum);

    return 0;
}
