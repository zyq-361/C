/*
*说明：第三次第一个作业
*姓名：赵永权
*学号：2016011715
*班级：8班
*日期：2017/04/17
*/
#include<stdio.h>
int main(void)
{
	char x;
	int i = 0;
	scanf_s("%c", &x);
	while (x!=0)
	{
		if (x & 1)
		{
			i++;
			x >>= 1;
		}
	}
	printf("%d\n", i);
	return 0;
}