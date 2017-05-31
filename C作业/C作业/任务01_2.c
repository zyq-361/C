/*说明：第二次第一个作业
*姓名：赵永权
*学号：2016011715
*班级：8班
*日期：2017/03/15
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
*说明：第二次第二个作业
*姓名：赵永权
*学号：2016011715
*班级：8班
*日期：2017/03/15
*/
#include<stdio.h>
int main(void)
{
	char  a, b, c;
	printf("请键入要输入的三个小写字母：");
	scanf_s("%c %c %c",&a,&b,&c);
	printf("%d %d %d\n", a, b, c);
	printf("%c %c %c", a - 32, b - 32, c - 32);
	return 0;
}      
/*
*说明：第二次第三个作业
*姓名：赵永权
*学号：2016011715
*班级：8班
*日期：2017/03/15
*/
#include<stdio.h>
int main(void) 
{
	float r, h, S, V, Area;
	const float  pi = 3.14;
	printf("圆柱的底面积的半径为：");
	scanf_s("%f", &r);
	printf("圆柱的高度为：");
	scanf_s("%f", &h);
	S = pi*r*r;
	V = S*h;
	Area = 2 * S + h * 2 * r*pi;
	printf("圆柱的表面积为:%.2f\n圆柱的体积为:%.2f\n", Area, V);
	return 0;
}