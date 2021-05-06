#include <stdio.h>

void main()
{
    int n,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n % 10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum)
        printf("%d is a palindrome number.\n",t);
    else
        printf("%d is not a palindrome number.\n",t);

}
