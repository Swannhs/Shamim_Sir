#include<stdio.h>
void main()
{
    int i,n,count = 0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            count++;
            break;
        }
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




