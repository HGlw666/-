#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
int main()
{
	//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
	int arr[10][10] = { 0 };
	int n, m;
	int i = 0;
	int sum = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)//给矩阵的每一行赋值
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j]>0)
				sum += arr[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}



#include <stdio.h>
#include <string.h>
int main()
{
	//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
	char arr[20] = { 0 };
	char arr1[20] = { 0 };
	int i = 0;
	int bt = 0;
	for (i = 0; i<20; i++)
	{
		scanf("%s %s", &arr[i], &arr1[i]);
	}
	bt = strcmp(arr, arr1);
	if (bt == 0)
		printf("same\n");
	else
		printf("different\n");
	return 0;
}




#include <stdio.h>
int main()
{
	//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
	double bite[100] = { 0 };
	int i = 0;
	int n;
	double max = 0;
	double min = 100;
	double sum = 0;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%lf", &bite[i]);
		if (bite[i]>max)
		{
			max = bite[i];
		}
		if (bite[i]<min)
		{
			min = bite[i];
		}
		sum += bite[i];
	}
	printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
	return 0;
}



#include <stdio.h>
int main()
{
	//翻转金字塔图案
	int x;//行数
	int i = 0;
	while (~scanf("%d", &x))
	{
		for (i = 0; i<x; i++)//打印的行数
		{//一下为打印一行的内容
			int j = 0;
			int pg = 1;
			for (pg = 1; pg <= i; pg++)//要先打印空格，在打印*！！！不能搞反了。
			{
				printf(" ");
			}
			for (j = 0; j<x - i; j++)
			{
				printf("* ");
			}

			printf("\n");
		}
	}
	return 0;
}





#include <stdio.h>
int main()
{
	//金字塔图案
	int i;
	int x = 0;
	while (~scanf("%d", &i))
	{
		for (x = 0; x<i; x++)
		{
			int j = 0;
			int y = 0;
			for (j = 0; j<i - 1 - x; j++)
			{
				printf(" ");
			}
			for (y = 0; y <= x; y++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}