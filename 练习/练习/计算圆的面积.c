#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
	const double pi = 3.141526;
	double r, area, circuit;
	printf("请输入半径：");
	scanf_s("%lf", &r);
	if (r <= FLT_EPSILON)
	{
		printf("错误：你输入的半径小于或等于0，程序退出。\n");
		system("pause");
		return 0;
	}
	area = pi*r*r;
	circuit = 2 * pi*r;
	printf("圆的面积和周长分别是：%f,%f\n", area, circuit);
	system("pause");
	return 0;

}