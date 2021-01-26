#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
#include <math.h>
int main()
{
	//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
	float a, b, c, t, x1, x2, m, n;
	while (~scanf("%f%f%f", &a, &b, &c))
	{
		if (a != 0)
		{
			t = b*b - 4 * a*c;
			if (t == 0)
			{
				x1 = x2 = -b / (2 * a);
				printf("x1=x2=%.2f\n", x1);
			}
			else if (t>0)
			{
				x1 = (-b - sqrt(t)) / (2 * a);
				x2 = (-b + sqrt(t)) / (2 * a);
				printf("x1=%.2f;x2=%.2f\n", x1, x2);
			}
			else
			{
				m = -b / (2 * a);
				n = (sqrt(-t)) / (2 * a);
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", m, n, m, n);
			}
		}
		else
			printf("Not quadratic equation\n");
	}
	return 0;
}



#include <stdio.h>
int main()
{
	//KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值，如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。当运算符为除法运算，即“/”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”
	double x = 0.0;
	double y = 0.0;
	char f = 0;
	while (~scanf("%lf%c%lf", &x, &f, &y))
	{
		switch (f)
		{
		case '+':
			printf("%.4lf%c%.4lf=%.4lf\n", x, f, y, x + y);
			break;
		case '-':
			printf("%.4lf%c%.4lf=%.4lf\n", x, f, y, x - y);
			break;
		case '*':
			printf("%.4lf%c%.4lf=%.4lf\n", x, f, y, x*y);
			break;
		case '/':
		{
					if (y == 0.0)
					{
						printf("Wrong!Division by zero!");
					}
					else
					{
						printf("%.4lf%c%.4lf=%.4lf\n", x, f, y, x / y);
					}
					break;
		}
		default:
			printf("Invalid operation!\n");
		}
	}
	return 0;
}