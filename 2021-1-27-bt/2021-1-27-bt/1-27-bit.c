#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>

//int main()
//{
//	//ʵ��һ�������������ð������
//	int arr[10] = { 1,4,6,2,3,9,8,5,10,23};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int pw = 1;
//	printf("����С�������\n");
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				pw = 0;
//				int s = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = s;
//			}
//		}
//		if (pw == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


void init(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int x = 0;
		*p = x;
		p++;
	}
}
void print(int* p, int sz)
{
	int i = 0;
	for (i=0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
}
//void reverse(int* b, int sz)
//{
//	int* x = b;
//	int* y = b + sz - 1;
//	int i = 0;
//	if (x<y)
//	{
//		int* z = x;
//		y = z;
//		x = y;
//		x++;
//		y--;
//		printf("%d", *x);
//	}
//	
//}//����û��д��
int main()
{
	//����һ���������飬��ɶ�����Ĳ���

   //	ʵ�ֺ���init() ��ʼ������Ϊȫ0
   //		ʵ��reverse()  �����������Ԫ�ص����á�
   //		Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
	//ʵ��print()  ��ӡ�����ÿ��Ԫ��
	int arr[10];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print(arr, sz);
//	reverse(arr, sz);
	return 0;
}