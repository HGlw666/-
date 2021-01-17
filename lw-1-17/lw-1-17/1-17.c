#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
int jpn(int x)
{
	int y = 0;
	for (y = 2; y < x - 1; y++)
	{
		if (x%y == 0)
		{
			return 1;//不是素数返回1
		}
	}
	return 0;//是素数返回0
}
int main()
{
	int i;
	scanf("%d", &i);
	int x = jpn(i);
	if (x == 0)
		printf("%d是素数", i);
	else
		printf("%d不是素数", i);
	return 0;
}