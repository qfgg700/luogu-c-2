#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int l,r;
	char a[100];
	int i,j;
	int count=0;
	
	scanf("%d %d",&l,&r);
	
	for(i=l;i<=r;i++)
	{
		sprintf(a,"%d",i);
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='2') count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
