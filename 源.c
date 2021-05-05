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
char ggg[] = "hello world";
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
	printf("您是否要三连（T/F）\n");
	scanf("%d",&T/F);
	if(T/F == T)
	{
		printf("ohhhhhhhhhhhh感谢!!\n");
	}
	else if(T/F == F)
	{
		printf("NNNNOOOO!!\n");
	}
	else
	{
		printf("宁搁这输什么呢\n");
	}
	printf("请输入测试密码:");
	scanf("%d",&P);
	switch(P)
	{
		case 114514:
			printf("密码正确\n");
			printf("请输入两个数:");
			scanf("%d %d",&S,&F);
			for(? = 0,S > F,S++)
			{
			? = ? + S;
			}
			printf("结果是%d",?);
			break;
		default
			:printf("密码错误，程序结束\n");
			break;
	}
	
	return 0;
}
