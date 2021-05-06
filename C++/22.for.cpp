#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	long int b= 0, octal, place = 1, r,n;
	int OCT[] = {0, 1, 10, 11, 100, 101, 110, 111};

	cout << "Enter the octal Value:\n";
	cin >> octal;
	n=octal;

	for(n=octal;octal > 0;octal = octal/10)
	{
		r = octal % 10;
		b += (OCT[r]*place);
		place *= 1000;
	}
	cout << "Binary Value is" << b;
}
