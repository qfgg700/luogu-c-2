#include<stdio.h>
int main()
{
	unsigned long long int n,point;
	scanf("%lld",&n);
	point=n*(n-1)/2*(n-2)/3*(n-3)/4;
	printf("%lld",point);
	return 0;
}
