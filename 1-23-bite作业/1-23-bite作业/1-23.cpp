#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//int add(int x)
//{
//	int bt = 1;
//	int j = 2;
//	for (j = 2; j <=x-1; j++)
//	{
//		if (x%j == 0)
//		{
//			bt = 0;
//			return bt;
//		}
//	}
//	return bt;
//}
//int main()
//{
//	//实现一个函数，判断一个数是不是素数。利用上面实现的函数打印100到200之间的素数。
//	int i = 101;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (add(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//int add(int year)
//{
//	return(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//int main()
//{
//	//实现函数判断year是不是润年。
//	int year;
//	scanf("%d", &year);
//	if (add(year) == 1)
//	{
//		printf("%d是润年",year);
//	}
//	else
//	{
//		printf("%d不是润年", year);
//	}
//	return 0;
//}



//void add(int* x, int* y)
//{
//	int i = 0;
//	i = *x;
//	*x = *y;
//	*y = i;
//}
//int main()
//{
//	//实现一个函数来交换两个整数的内容。
//	int x, y;
//	scanf("%d%d", &x, &y);
//	add(&x, &y);
//	printf("%d %d", x, y);
//	return 0;
//}


//int main()
//{
//	//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定。如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
//	int i;
//	scanf("%d", &i);
//	int x = 1;
//	for (x = 1; x <= i; x++)
//	{
//		int j = 1;
//		for (j = 1; j <= x; j++)
//		{
//			printf("%-2d*%-2d=%-3d ",x, j, x*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//void add(int i)
//{
//	if ((i > 9)||(i<-9))//递归的终止条件，即当整数拆分为一位数时停止拆分。
//	{
//		add(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	//递归方式实现打印一个整数的每一位
//	int i = 0;
//	scanf("%d", &i);
//	add(i);
//	return 0;
//}



//int main()
//{
//	//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//	//非递归写法
//	/*int n;
//	int i = 1;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("%d", sum);
//	return 0;*/
//}

//int add(int n)
//{
//	if (n > 1)
//	{
//		n=n*add(n-1);
//	}
//	return n;
//}
//int main()
//{
//	//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//	//递归写法
//	int n;
//	scanf("%d", &n);
//	add(n);
//	printf("%d", add(n));
//	return 0;
//}


//int DigitSum(int n)
//{
//	int i = n%10;
//	if (n > 9)
//	{
//		i = n % 10;
//		i += DigitSum(n / 10);
//	}
//	return i;
//}
//int main()
//{
//	//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//	int n;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("%d", DigitSum(n));
//	return 0;
//}



//int main()
//{
//	//编写代码在一个整形有序数组中查找具体的某个数.要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//	int arr[5] = { 1, 2, 4, 6, 8 };
//	int i = 0;
//	scanf("%d", &i);
//	if (i>arr[(0 + 5) / 2])
//		return 0;
//}//未完成。