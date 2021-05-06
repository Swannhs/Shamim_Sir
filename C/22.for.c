#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long int b= 0, octal, place = 1, r,n;
	int OCT[] = {0, 1, 10, 11, 100, 101, 110, 111};

	printf("Enter the octal Value:\n");
	scanf("%ld",&octal);
	n=octal;

	for(n=octal;octal > 0;octal = octal/10)
	{
		r = octal % 10;
		b += (OCT[r]*place);
		place *= 1000;
	}
	printf("Binary Value is %ld", b);
}
