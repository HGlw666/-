#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
#define ROW 10
//int main()
//{
//	//实现一个对整形数组的冒泡排序
//	//从大到小排序
//	int arr[ROW] = { 0 };
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		int jm = 1;
//		for (j = 0; j < ROW - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int wt = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = wt;
//				jm = 0;
//			}
//		}
//		if (jm == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int main()
{
	//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
	int arr[ROW] = { 0 };
	int arr1[ROW] = { 0 };
	int i = 0;
	for (i = 0; i < 2 * ROW; i++)
	{
		scanf("%d", &arr[i]);
		if (i >= ROW)
		{
			printf("\n");
			scanf("%d",&arr1[i]);
		}
	}
	for (i = 0; i < ROW; i++)
	{
		if (arr[i] != arr1[i])
		{
			int tum = arr[i];
			arr[i] = arr1[i];
			arr1[i] = tum;
		}
	}
	//for (i = 0; i < ROW; i++)
	//{
	//	printf("%d", arr[i]);
	//	if (i == ROW-1)
	//	{
	//		i = 0;
	//		printf("\n");
	//		printf("%d", arr1[i]);
	//	}
	//}没写对
	return 0;
}