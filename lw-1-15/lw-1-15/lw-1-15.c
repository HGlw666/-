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
	//��ĿҪ�󣺵��ú�����һ��Բ����ı���������
	int x;//Բ����ĸ�
	int r;//Բ����İ뾶
	float z = 3.14;//Բ����
	scanf("%d%d", &x, &r);//����Բ����ĸߺͰ뾶
	float s= sfa(x,r,z);//���������
	float v=vle(x,r,z);//�������
	printf("%lf%lf", s,v);
	return 0;
}