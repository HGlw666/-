#define _CRT_SECURE_NO_WARNINGS   1
//#include <stdio.h>
//int main()//从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
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
#include <stdio.h>
#include <ctype.h>
int main()//有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
{
	char x;
	while (~scanf("%c", &x))
	{
		if (x >= 'a' && x <= 'z')
		{
			printf("%c\n", x - 32);
		}
		if (x >= 'A' && x <= 'Z')
		{
			printf("%c\n", x + 32);
		}
	}
	return 0;
}