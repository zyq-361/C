/*
*˵���������ε�һ����ҵ
*����������Ȩ
*ѧ�ţ�2016011715
*�༶��8��
*���ڣ�2017/04/17
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