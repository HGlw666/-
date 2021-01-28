#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
int main()
{
	//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
	int arr1[10];
	int arr2[10];
	int i = 0;
	int l = 0;
	for (i = 0; i<10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 9; i >= 0; i--)
	{
		arr2[l] = arr1[i];
		l++;
	}
	for (l = 0; l<10; l++)
	{
		printf("%d ", arr2[l]);
	}
	return 0;
}




#include <stdio.h>
int main()
{
	//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
	int n, h, m, a, b;
	scanf("%d %d %d", &n, &h, &m);
	a = m / h;
	if (m%h != 0)
		b = n - a - 1;
	else
		b = n - a;
	printf("%d", b);
	return 0;
}




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
int main()
{
	//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩。
	int n = 0;//学生个数
	int bt[40] = { 0 };
	int i;//循环赋值次数
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &bt[i]);
	}
	for (i = 0; i<n - 1; i++)
	{
		int j = 0;
		for (j = 0; j<n - 1 - i; j++)
		{
			if (bt[j]<bt[j + 1])
			{
				int lpw = bt[j];
				bt[j] = bt[j + 1];
				bt[j + 1] = lpw;
			}
		}
	}
	for (i = 0; i<5; i++)
	{
		printf("%d ", bt[i]);
	}
	return 0;
}