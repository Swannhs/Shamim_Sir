#include<stdio.h>
void main()
{
    int i,j,a,b;
    scanf("%d%d",&a,&b);
    int n;
    for(i=a;i<=b;i++)
    {
         n=i;
        int count = 0;
        for(j=2;j<i;j++)
        {
            if(n%j == 0)
            {
                count++;
                break;
            }
        }
    if(count == 0 && i>1)
    {
            printf("%d is a  prime number\n",i);
    }
    }
}
