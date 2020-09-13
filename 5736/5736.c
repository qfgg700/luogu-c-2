#include<stdio.h>
#include<math.h>

int sushu(int a)
{
	int i;
	if(a<2) return 0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}

int main()
{
	int a[200],n,i,j,sign=10;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sign=sushu(a[i]);
		if(sign==1) printf("%d ",a[i]);
		sign=10;
	}
	
	return 0;
}
