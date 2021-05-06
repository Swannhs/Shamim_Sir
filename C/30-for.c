#include <stdio.h>

void main(){
    int i,n,r,sum=0;

    printf("Input  a number: ");
    scanf("%d",&n);

    for(i=n;n!=0;n=n/10){
         r=n % 10;
         sum=sum+(r*r*r);
    }
    if(sum==i)
         printf("%d is an Armstrong number.\n",i);
    else
         printf("%d is not an Armstrong number.\n",i);

}
