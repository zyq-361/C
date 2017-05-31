#include<stdio.h>//操作指针
int main(void)
{
	/*int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
	printf("%d\n", a[1] + 2);
	printf("%d\n",*(a+1)+2);
	printf("%d\n",*(a[1]+2));
	printf("%d\n",*(*(a+1)+2));
	printf("%d\n",(*(a+1))[2]);*/
	char x[100];
	scanf_s("%s", x);
	int i = 0, j = 0;
	j = strlen(x);
	j--;
	while (i < j)
	{
		if (x[i] != x[j])
		els
		{
			i++;
			j--;
		}
	
	}
	printf("不是回文\n");
	printf("是回文")
	return 0;
}