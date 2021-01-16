#define _CRT_SECURE_NO_WARNINGS   1
//#include <stdio.h>//检验1个数是不是奇数
//int main()
//{
//	int i;
//	while (~scanf("%d", &i))
//	{
//	if (i % 2 == 0)
//		printf("%d不是奇数", i);
//	else
//		printf("%d是奇数", i);
//	}
//	return 0;
//}
//
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);//计算一个数n的1~n的阶乘的和//第一种写法
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <=n; i++)//
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <=i; j++)//这两处for循环的初始化一定要从1开始，不能从0，并且要相等与边界指。前者会导致阶乘指恒为0，后者会导致阶乘指不准确
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int n;//计算一个数n的1~n的阶乘的和//第2种写法
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)//这种写法相比较与上一种写法，只需要1层for循环，代码更简洁且高效
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}