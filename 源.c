#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int aaa = 100;//����
char eee = 'w';//�ַ���������
short int ddd = 1;//������
long int xxx = 10000;//������
float qqq = 1.0;//�����ȸ�����
double www = 3.14;//˫���ȸ�����
char fff[] = { 'l','x','l' };//�ַ���
char vvv[5] = { 'l','o','v' ,'e' };
char ggg[] = "afcvagfw";
short int day = 1;

int main()
{
	double aaaa = 7.0;
	printf("ѧC���Եĵ�%d��\n", day);
	printf("aaa=%d\n",aaa);
	scanf_s("%d",&aaa);
	printf("aaa=%d\n", aaa);
	printf("%d,%d,%d\n",aaa,ddd,xxx);
	aaaa = aaa + xxx - pow(www, 2, 2, 2);
	printf("�ر����=%f\n",aaaa);
	printf("%s,%s,%s\n",fff,vvv,ggg);
	printf("%d\n",xxx);
	printf("%f\n",qqq);
	printf("%f\n",www);
	printf("%c\n",eee);
	printf("���\n");
	return 0;
}