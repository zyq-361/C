#include<stdio.h>
int main(void)
{
	int n;
	printf("ÇëÊäÈëÕûÊı£º");
	scanf_s("%d" ,&n);
	int sum;
	sum = n*(n + 1) / 2;
	printf("sum=%d\n", n*(n +1) / 2);
	return 0;
}