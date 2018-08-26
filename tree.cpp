#include<stdio.h>
#include<conio.h>
A( int n)
{
	if(n<=1)
	return 1;
	printf("\n%d",n);
	A(n-1);
	B(n-2);
}
B( int n)
{
	if(n<=1)
	return 1;
	A(n-1);
	printf("\n%d",n);
	B(n-2);
}
int main()
{
	A(5);
}
