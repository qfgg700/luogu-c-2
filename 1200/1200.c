#include<stdio.h>
#include<string.h>

int main()
{
	
	int i,umod=1,pmod=1;
	int u[10],p[10];
	char ufo[10],people[10];
	
	gets(ufo);
	gets(people);
	
	for(i=0;i<strlen(ufo);i++)
	{
		u[i]=ufo[i]-'A'+1;
		umod*=u[i];
	}
	for(i=0;i<strlen(people);i++)
	{
		p[i]=people[i]-'A'+1;
		pmod*=p[i];
	}
	
	umod=umod%47;
	pmod=pmod%47;
	
	if(umod==pmod) printf("GO");
	else printf("STAY");
	
	return 0;
}
