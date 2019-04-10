#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c, x,y,z,n;
	printf("請輸入各別的時:");
	scanf("%d %d", &a,&x);
	printf("請輸入各別的分:");
	scanf("%d %d", &b,&y);
	printf("請輸入各別的秒:");
	scanf("%d %d", &c,&z);
	if (a > x)
	{
		n = (a - x) * 3600 + (b - y) * 60 + (c - z);
			printf("相差%d秒", n);

	}
	else if (x > a)
	{
		n = (x - a) * 3600 + (b - y) * 60 + (c - z);
			printf("相差%d秒", n);

	}
	else
		printf("輸入錯誤");

	system("pause");
	return 0;
}