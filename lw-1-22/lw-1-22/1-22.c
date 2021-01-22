#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
//int main()//写代码将三个数按从大到小输出
//{
//	//第一种写法
//	int x, y, z;
//	int max = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	//输入3个数
//	if (z > y)
//	{
//		max = y;
//		y = z;
//		z = max;
//	}
//	if (y > x)
//	{
//		max = x;
//		x = y;
//		y = max;
//	}
//	if (z > y)
//	{
//		max = y;
//		y = z;
//		z = max;
//	}
//	printf("%d%d%d", x, y, z);
//	return 0;
//}
//int main()//写代码将三个数按从大到小输出
//{
//	//第2种写法
//	int arr[3] = { 0 };
//	int i = 0;
//	int max;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 2; j <= 0; j--)
//	{
//		if (arr[j]>arr[j - 1])
//		{
//			max = arr[j - 1];
//			arr[j-1] = arr[j];
//			arr[j] = max;
//		}
//	}
//	for (i=0;i<3;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}//尚未写对
//int main()//写一个代码打印1-100之间所有3的倍数的数字
//{
//	int i = 1;
//	for (i =3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()//打印1000年到2000年之间的闰年
//{
//	//第一种写法
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i%400==0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//写一个代码：打印100~200之间的素数
//	int i = 100;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j < i - 1; j++)
//		{
//			if (i%j == 0)//
//			{
//				continue;
//			}
//		}
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//	int i = 0;
//	int x = 1;
//	for (i = 10; i <= 100; i++)
//	{
//		if (i % 10==9)
//		{
//			x++;
//		}
//		if (i / 10 == 9)
//		{
//			x++;
//		}
//	}
//	printf("%d", x);
//	return 0;
//}
//int main()
//{
//	//求10 个整数中最大值
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[0]<arr[ 1+i])
//		{
//			max = arr[0];
//			arr[0] = arr[1+i];
//			arr[ 1+i] = max;
//		}
//	}
//	printf("%d", arr[0]);
//	return 0;
//}
//int main()
//{
//	//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//	int i = -1;
//	int z = 1;
//	float sum = 0;
//	for (z = 1; z <= 100; z++)
//	{
//		i = -i;
//		sum += (1.0 / z)*i;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	//在屏幕上输出9*9乘法口诀表
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("1*%d=%d",j,)
//		}
//	}
//	return 0;
//}
int main()
{
	//编写代码在一个整形有序数组中查找具体的某个数.要求：找到了就打印数字所在的下标，找不到则输出：找不到。
	int arr[5] = { 1, 2, 4, 6, 8 };
	int i = 0;
	scanf("%d", &i);
	if (i>arr[(0+5)/2])
	return 0;
}