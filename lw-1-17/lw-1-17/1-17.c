#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
int jpn(int x)
{
	int y = 0;
	for (y = 2; y < x - 1; y++)
	{
		if (x%y == 0)
		{
			return 1;//������������1
		}
	}
	return 0;//����������0
}
int main()
{
	int i;
	scanf("%d", &i);
	int x = jpn(i);
	if (x == 0)
		printf("%d������", i);
	else
		printf("%d��������", i);
	return 0;
}