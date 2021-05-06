#include <stdio.h>
int main() {
    int n, rev = 0, rem;
    scanf("%d", &n);
    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    while (n != 0);
    printf("Reversed number is = %d", rev);
    return 0;
}
