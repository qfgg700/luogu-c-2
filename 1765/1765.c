#include<stdio.h>
#include<string.h>
int main()
{
	int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	char a[300];
	int i,count=0;
	
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ') count++;
		else count+=num[a[i]-'a']; 
	}
	
	printf("%d",count);
	
	return 0;
}
