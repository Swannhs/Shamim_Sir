#include<stdio.h>
void main()
{
    int i=2,n,count = 0;
    scanf("%d",&n);
    do
    {
        if(n%i == 0)
        {
            count++;
            break;
        }
        i++;
    }
    while(i<n);
    if(count == 0)
    {
            printf("%d is a  prime number",n);
    }
    else
    {
            printf("%d is not a  prime number",n);
    }
}





