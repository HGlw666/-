#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>

//int main()
//{
//	//实现一个对整形数组的冒泡排序
//	int arr[10] = { 1,4,6,2,3,9,8,5,10,23};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int pw = 1;
//	printf("按大到小排序输出\n");
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
//}//函数没有写对
int main()
{
	//创建一个整形数组，完成对数组的操作

   //	实现函数init() 初始化数组为全0
   //		实现reverse()  函数完成数组元素的逆置。
   //		要求：自己设计以上函数的参数，返回值。
	//实现print()  打印数组的每个元素
	int arr[10];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print(arr, sz);
//	reverse(arr, sz);
	return 0;
}