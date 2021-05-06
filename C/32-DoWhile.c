#include<stdio.h>
void main()
{
    int n,i=1,sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    do
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    while(i<n);
    if(sum==n)
        printf("%d is a perfect number",i);
    else
        printf("%d is not a perfect number",i);

}


