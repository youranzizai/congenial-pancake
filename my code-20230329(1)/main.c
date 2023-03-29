#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ADD(int x, int y )
{
	int sum2=0;
	sum2=x+y;
	return sum2;
}
int main()
{
	int a=1;
	int sum1=0;
	int sum3=0;
	int b=0;
	int c=0;
	while(a<=100)
	{
		sum1=sum1+a;
		a++;
	}
	printf("1+2+...+100=%d\n",sum1);
	scanf("%d%d",&b,&c);
	sum3=ADD(b ,c);
	printf("sum3=%d\n",sum3);
}