#include <stdio.h>
void main()
{
    int num,r,sum=0,i;

    printf("Input a number: ");

    scanf("%d",&num);
    i=num;
    do
    {
        r=num % 10;
        sum=sum*10+r;
         num=num/10;
    }
    while(num!=0);
    if(i==sum)
        printf("%d is a palindrome number.\n",i);
    else
        printf("%d is not a palindrome number.\n",i);

}

