#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main(void)
{
	const double pi = 3.141526;
	double r, area, circuit;
	printf("������뾶��");
	scanf_s("%lf", &r);
	if (r <= FLT_EPSILON)
	{
		printf("����������İ뾶С�ڻ����0�������˳���\n");
		system("pause");
		return 0;
	}
	area = pi*r*r;
	circuit = 2 * pi*r;
	printf("Բ��������ܳ��ֱ��ǣ�%f,%f\n", area, circuit);
	system("pause");
	return 0;

}