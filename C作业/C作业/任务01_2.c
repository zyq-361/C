/*˵�����ڶ��ε�һ����ҵ
*����������Ȩ
*ѧ�ţ�2016011715
*�༶��8��
*���ڣ�2017/03/15
*/
#include<stdio.h>
int main(void)
{
    printf("          ******\n");
    printf("          ******\n");
    printf("          ******\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("      **************\n");
	printf("      **************\n");
	printf("      **************\n");
	printf("      **************\n");
	printf("        ****  ****\n");
	printf("        ****  ****\n");
	printf("        ****  ****\n");
	printf("        ****  ****\n");
	printf("        ****  ****\n");
	return 0;
}
/*
*˵�����ڶ��εڶ�����ҵ
*����������Ȩ
*ѧ�ţ�2016011715
*�༶��8��
*���ڣ�2017/03/15
*/
#include<stdio.h>
int main(void)
{
	char  a, b, c;
	printf("�����Ҫ���������Сд��ĸ��");
	scanf_s("%c %c %c",&a,&b,&c);
	printf("%d %d %d\n", a, b, c);
	printf("%c %c %c", a - 32, b - 32, c - 32);
	return 0;
}      
/*
*˵�����ڶ��ε�������ҵ
*����������Ȩ
*ѧ�ţ�2016011715
*�༶��8��
*���ڣ�2017/03/15
*/
#include<stdio.h>
int main(void) 
{
	float r, h, S, V, Area;
	const float  pi = 3.14;
	printf("Բ���ĵ�����İ뾶Ϊ��");
	scanf_s("%f", &r);
	printf("Բ���ĸ߶�Ϊ��");
	scanf_s("%f", &h);
	S = pi*r*r;
	V = S*h;
	Area = 2 * S + h * 2 * r*pi;
	printf("Բ���ı����Ϊ:%.2f\nԲ�������Ϊ:%.2f\n", Area, V);
	return 0;
}