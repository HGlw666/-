#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
int main()
{
	//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
	int arr[10][10] = { 0 };
	int n, m;
	int i = 0;
	int sum = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = 0; j<m; j++)//�������ÿһ�и�ֵ
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
	//�û���¼��վ��ͨ����Ҫע�ᣬһ����Ҫ�����������롣�����ж���������������Ƿ�һ�£�һ�������same������һ�������different��
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
	//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
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
	//��ת������ͼ��
	int x;//����
	int i = 0;
	while (~scanf("%d", &x))
	{
		for (i = 0; i<x; i++)//��ӡ������
		{//һ��Ϊ��ӡһ�е�����
			int j = 0;
			int pg = 1;
			for (pg = 1; pg <= i; pg++)//Ҫ�ȴ�ӡ�ո��ڴ�ӡ*���������ܸ㷴�ˡ�
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
	//������ͼ��
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