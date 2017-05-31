/*
*说明：第三次第二个作业
*姓名：赵永权
*学号：2016011715
*班级：8班
*日期：2017/03/15
*/
#include<stdio.h>
int main(void)
{
	int n = 0;
	double h = 100.0;
	double sum = 0.0;
	while (n<10)
	{
		h = h / 2;
		printf("第%d次反弹的高度：%.6lf\n", n + 1, h);
		sum = sum + h;
		n = n + 1;
	}
	printf("小球反弹的总高度：%.6lf\n", sum);
	return 0;
 }