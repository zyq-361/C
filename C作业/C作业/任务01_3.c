/*
*˵���������εڶ�����ҵ
*����������Ȩ
*ѧ�ţ�2016011715
*�༶��8��
*���ڣ�2017/03/15
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
		printf("��%d�η����ĸ߶ȣ�%.6lf\n", n + 1, h);
		sum = sum + h;
		n = n + 1;
	}
	printf("С�򷴵����ܸ߶ȣ�%.6lf\n", sum);
	return 0;
 }