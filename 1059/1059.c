#include<stdio.h>
int main()
{
	int n,a[200],b[200];
	int i,j,k=0,count=0;
	int temp;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			b[k]=a[i];
			k++;
		}
		else count++;
	}
	
	printf("%d\n",n-count);
	for(i=0;i<n-count;i++)
	{
		printf("%d ",b[i]);
	}
	
	return 0;
}
