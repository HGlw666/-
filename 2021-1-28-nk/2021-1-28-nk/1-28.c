#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
int main()
{
	//����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
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
	//BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
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
int main()
{
	//���п��Կ�ʼ�ˣ���Ҷ���ȡ�úóɼ�������ǰ�������Ӽ�������n��ѧ���ɼ���������40���������ÿ������ǰ��ߵĳɼ���
	int n = 0;//ѧ������
	int bt[40] = { 0 };
	int i;//ѭ����ֵ����
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