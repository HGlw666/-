#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
//int main()//д���뽫���������Ӵ�С���
//{
//	//��һ��д��
//	int x, y, z;
//	int max = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	//����3����
//	if (z > y)
//	{
//		max = y;
//		y = z;
//		z = max;
//	}
//	if (y > x)
//	{
//		max = x;
//		x = y;
//		y = max;
//	}
//	if (z > y)
//	{
//		max = y;
//		y = z;
//		z = max;
//	}
//	printf("%d%d%d", x, y, z);
//	return 0;
//}
//int main()//д���뽫���������Ӵ�С���
//{
//	//��2��д��
//	int arr[3] = { 0 };
//	int i = 0;
//	int max;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 2; j <= 0; j--)
//	{
//		if (arr[j]>arr[j - 1])
//		{
//			max = arr[j - 1];
//			arr[j-1] = arr[j];
//			arr[j] = max;
//		}
//	}
//	for (i=0;i<3;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}//��δд��
//int main()//дһ�������ӡ1-100֮������3�ı���������
//{
//	int i = 1;
//	for (i =3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()//��ӡ1000�굽2000��֮�������
//{
//	//��һ��д��
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i%400==0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//дһ�����룺��ӡ100~200֮�������
//	int i = 100;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j < i - 1; j++)
//		{
//			if (i%j == 0)//
//			{
//				continue;
//			}
//		}
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//	int i = 0;
//	int x = 1;
//	for (i = 10; i <= 100; i++)
//	{
//		if (i % 10==9)
//		{
//			x++;
//		}
//		if (i / 10 == 9)
//		{
//			x++;
//		}
//	}
//	printf("%d", x);
//	return 0;
//}
//int main()
//{
//	//��10 �����������ֵ
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[0]<arr[ 1+i])
//		{
//			max = arr[0];
//			arr[0] = arr[1+i];
//			arr[ 1+i] = max;
//		}
//	}
//	printf("%d", arr[0]);
//	return 0;
//}
//int main()
//{
//	//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//	int i = -1;
//	int z = 1;
//	float sum = 0;
//	for (z = 1; z <= 100; z++)
//	{
//		i = -i;
//		sum += (1.0 / z)*i;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	//����Ļ�����9*9�˷��ھ���
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("1*%d=%d",j,)
//		}
//	}
//	return 0;
//}
int main()
{
	//��д������һ���������������в��Ҿ����ĳ����.Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
	int arr[5] = { 1, 2, 4, 6, 8 };
	int i = 0;
	scanf("%d", &i);
	if (i>arr[(0+5)/2])
	return 0;
}