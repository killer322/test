#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int aaa = 100;//整形
char eee = 'w';//字符数据类型
short int ddd = 1;//短整形
long int xxx = 10000;//长整形
float qqq = 1.0;//单精度浮点数
double www = 3.14;//双精度浮点数
char fff[] = { 'l','x','l' };//字符串
char vvv[5] = { 'l','o','v' ,'e' };
char ggg[] = "afcvagfw";
short int day = 1;

int main()
{
	double aaaa = 7.0;
	printf("学C语言的第%d天\n", day);
	printf("aaa=%d\n",aaa);
	scanf_s("%d",&aaa);
	printf("aaa=%d\n", aaa);
	printf("%d,%d,%d\n",aaa,ddd,xxx);
	aaaa = aaa + xxx - pow(www, 2, 2, 2);
	printf("特别计算=%f\n",aaaa);
	printf("%s,%s,%s\n",fff,vvv,ggg);
	printf("%d\n",xxx);
	printf("%f\n",qqq);
	printf("%f\n",www);
	printf("%c\n",eee);
	printf("你好\n");
	return 0;
}