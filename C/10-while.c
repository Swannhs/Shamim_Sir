#include<stdio.h>
void main()
{
    int i=2,n,count = 0;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i == 0)
        {
            count++;
            break;
        }
        i++;
    }
    if(count == 0)
    {
            printf("%d is a  prime number",n);
    }
    else
    {
            printf("%d is not a  prime number",n);
    }
}





