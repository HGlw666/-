
#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
int add(int x, int y)
{
	int i = 0;
	if (x > y)
		i = x;
	else
		i = y;
	return i;
}
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	add(x, y);
	int sum = add(x, y);
	printf("Ωœ¥Û÷µ=%d", sum);

	return 0;
}