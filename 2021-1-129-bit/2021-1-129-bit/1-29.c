#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
#define ROW 10
//int main()
//{
//	//ʵ��һ�������������ð������
//	//�Ӵ�С����
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
	//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
	//}ûд��
	return 0;
}