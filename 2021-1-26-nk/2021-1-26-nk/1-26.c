#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
#include <math.h>
int main()
{
	//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4*a*c������������㲢������̵ĸ���
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
	//KiKiʵ��һ���򵥼�������ʵ���������ġ��Ӽ��˳������㣬�û��Ӽ���������ʽ��������1�����������2�������㲢������ʽ��ֵ����������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!�����������Ϊ�������㣬����/��ʱ�����������2����0.0���������Wrong!Division by zero!��
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