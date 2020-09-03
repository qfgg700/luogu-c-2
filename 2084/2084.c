#include<stdio.h>
#include<string.h>
int main()
{
	int m,i=0,a[1000],j,c,b=0;
	char n[1000];
	scanf("%d",&m);
	gets(n);
	for(i=1,c=strlen(n)-2;i<strlen(n);i++,c--)
	{
		if(n[i]=='0') continue;
		if(i==1) printf("%c*%d^%d",n[i],m,c);
		else printf("+%c*%d^%d",n[i],m,c);
	}
	return 0;
} 
