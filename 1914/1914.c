#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	char a[50];
	scanf("%d\n",&n);
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		
		a[i]=(a[i]-'a'+n)%26+'a';
	}
	puts(a);
	return 0;
}
//in[j]-'a':读入中对应的第几个字母的位置，比如'a'对应0，'b'对应1，'c'对应2（0开始）；
//in[j]-'a'+n:读入中对应字母加上转移位数得到的字母的对应位置。
//比如说'c'这个字母移动3位，就是第2个字母向右移动3个，就是第五个字母，即'f'
//取余26是防止移动位数超过26导致炸掉
//再加上'a'，将对应位置还原成字母，再打出来 
