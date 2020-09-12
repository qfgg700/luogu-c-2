#include<stdio.h>
#include<math.h>
float dis(float x1,float y1,float x2,float y2)
{
	float distance;
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return distance;
}
int main()
{
	float a[6];
	int i;
	float c1,c2,c3,c;
	
	for(i=0;i<6;i++)
	{
		scanf("%f",&a[i]);
	}
	
	c1=dis(a[0],a[1],a[2],a[3]);
	c2=dis(a[0],a[1],a[4],a[5]);
	c3=dis(a[4],a[5],a[2],a[3]);
	c=c1+c2+c3;
	
	printf("%.2f",c);
	
	return 0;
} 
