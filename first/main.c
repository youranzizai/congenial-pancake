#include<stdio.h>
int main()
{   int sum1=0;
	int sum2=0;
	int sum=0;
	char ch='A';
	int in=20;//���ڴ�����4���ֽ�24bit�����20��
	float f=5.0;
	double d=3.14;
	printf("hello world\n");
	printf("%c\n",ch);
	printf("%d\n",in);
	printf("%f\n",f);
	printf("%lf\n",d);
	printf("%d\n",sizeof(short));//��ʾ�ܴ�ŵ��ֽ�
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(char));
	scanf("%d%d",&sum1,&sum2);
	sum=sum1+sum2;
	printf("sum=%d",sum);

		return 0;
}