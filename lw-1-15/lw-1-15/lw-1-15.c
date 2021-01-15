#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
float sfa(int x, int y, float z)
{
	float s = z*y*y * 2 + 2 * z*y*x;
	return s;
}
float vle(int x, int y, float z)
{
	float v = z*y*y*x;
	return v;
}
int main()
{
	//题目要求：调用函数求一个圆柱体的表面积和体积
	int x;//圆柱体的高
	int r;//圆柱体的半径
	float z = 3.14;//圆周率
	scanf("%d%d", &x, &r);//输入圆柱体的高和半径
	float s= sfa(x,r,z);//表面积函数
	float v=vle(x,r,z);//体积函数
	printf("%lf%lf", s,v);
	return 0;
}