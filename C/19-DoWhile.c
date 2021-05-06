#include <stdio.h>

void main()
{
    long int b, oct= 0, j = 1, r;

    printf("Enter the value for  binary number: ");
    scanf("%ld", &b);
    do
    {
        r = b % 10;
        oct = oct + r * j;
        j = j * 2;
        b = b / 10;
    }
    while (b != 0);
    printf("Equivalent octal value: %lo", oct);
}


