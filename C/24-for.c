#include <stdio.h>
int main() {
    int i,n, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(i=n;n!= 0;n/=10)
        {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    printf("Reversed number is = %d", rev);
    return 0;
}
