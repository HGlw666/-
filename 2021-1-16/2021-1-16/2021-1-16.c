#define _CRT_SECURE_NO_WARNINGS   1
//#include <stdio.h>//����1�����ǲ�������
//int main()
//{
//	int i;
//	while (~scanf("%d", &i))
//	{
//	if (i % 2 == 0)
//		printf("%d��������", i);
//	else
//		printf("%d������", i);
//	}
//	return 0;
//}
//
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);//����һ����n��1~n�Ľ׳˵ĺ�//��һ��д��
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)//
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)//������forѭ���ĳ�ʼ��һ��Ҫ��1��ʼ�����ܴ�0������Ҫ�����߽�ָ��ǰ�߻ᵼ�½׳�ָ��Ϊ0�����߻ᵼ�½׳�ָ��׼ȷ
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
//	int n;//����һ����n��1~n�Ľ׳˵ĺ�//��2��д��
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)//����д����Ƚ�����һ��д����ֻ��Ҫ1��forѭ�������������Ҹ�Ч
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}