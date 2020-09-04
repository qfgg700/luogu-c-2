#include<stdio.h>
int jiecheng(int a)
{
	if(a==0) return 1;
	return a*jiecheng(a-1);
}
int main()
{
	int i;
	scanf("%d",&i);
	printf("%d",jiecheng(i));
	return 0;
}
