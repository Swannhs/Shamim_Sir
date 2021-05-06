#include <stdio.h>

void main()
{
    long int b, oct= 0, j = 1, r,n;

    printf("Enter the value for  binary number: ");
    scanf("%ld", &b);
    for (n=b;b!=0;b=b/10)
    {
        r = b % 10;
        oct = oct + r * j;
        j = j * 2;

    }
    printf("Equivalent octal value is: %lo", oct);
}
