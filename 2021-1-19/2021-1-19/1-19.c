#define _CRT_SECURE_NO_WARNINGS   1
//#include <stdio.h>
//int main()//�ж�������ż��
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		if (x % 2 == 0)
//
//			printf("Even\n");
//
//		if (x % 2 == 1)
//
//			printf("Odd\n");
//	}
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()//��߷���
//{
//	int x, y, z, max;
//	while (~scanf("%d %d %d", &x, &y, &z))
//	{
//		if ((x >= y) && (x >= z))
//		{
//			printf("%d\n", x);
//		}
//		else if ((y >= x) && (y >= z))
//		{
//			printf("%d\n", y);
//		}
//		else
//			printf("%d\n", z);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()//�ж���Ԫ�����Ǹ���
//{
//	char zm[] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };
//	char zm1;
//	int i;
//	while (~scanf(" %c", &zm1))
//	{
//		for (i = 0; i<10; i++)
//		{
//			if (zm1 == zm[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()//�ж��������Ĵ�С��ϵ
//{
//	int x, y;
//
//	while (scanf("%d %d\n", &x, &y) != EOF)
//	{
//		if (x == y)
//		{
//			printf("%d=%d\n", x, y);
//		}
//		if (x>y)
//		{
//			printf("%d>%d\n", x, y);
//		}
//
//		if (x<y)
//		{
//			printf("%d<%d\n", x, y);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()//���㵥λ��Ծ����
{
	int t;
	int bite;
	float pge = 0.5;
	while (scanf("%d\n", &t) != EOF)
	{
		if (t>0)
		{
			bite = 1;
			printf("%d\n", bite);
			continue;
		}
		if (t<0)
		{
			bite = 0;
			printf("%d\n", bite);
			continue;
		}
		else
		{
			printf("%.1f\n", pge);
			continue;
		}
	}
	return 0;
}