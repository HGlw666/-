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
//	//ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�����ӡ100��200֮���������
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
//	//ʵ�ֺ����ж�year�ǲ������ꡣ
//	int year;
//	scanf("%d", &year);
//	if (add(year) == 1)
//	{
//		printf("%d������",year);
//	}
//	else
//	{
//		printf("%d��������", year);
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
//	//ʵ��һ�������������������������ݡ�
//	int x, y;
//	scanf("%d%d", &x, &y);
//	add(&x, &y);
//	printf("%d %d", x, y);
//	return 0;
//}


//int main()
//{
//	//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ�����磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	if ((i > 9)||(i<-9))//�ݹ����ֹ�����������������Ϊһλ��ʱֹͣ��֡�
//	{
//		add(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//	int i = 0;
//	scanf("%d", &i);
//	add(i);
//	return 0;
//}



//int main()
//{
//	//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//	//�ǵݹ�д��
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
//	//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//	//�ݹ�д��
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
//	//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//	int n;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("%d", DigitSum(n));
//	return 0;
//}



//int main()
//{
//	//��д������һ���������������в��Ҿ����ĳ����.Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//	int arr[5] = { 1, 2, 4, 6, 8 };
//	int i = 0;
//	scanf("%d", &i);
//	if (i>arr[(0 + 5) / 2])
//		return 0;
//}//δ��ɡ�