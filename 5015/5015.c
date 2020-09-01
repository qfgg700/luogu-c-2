#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int i,c=0;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' '||a[i]=='\t'||a[i]=='\n') continue;
		c++;
	}
	printf("%d",c);
	return 0;
}
