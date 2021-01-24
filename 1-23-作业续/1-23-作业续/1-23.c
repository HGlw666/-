#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
//int add(int n, int k)
//
//{
//	if (k > 1)
//	{
//		n= n*add(n,k-1);
//	}
//	return n;
//	
//}
//
//int main()
//
//{
//
//	//编写一个函数实现n的k次方，使用递归实现。
//
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%d的%d次方=%d",n,k,add(n,k));
//	return 0;
//
//}



//int main()
//{
//	//递归和非递归分别实现strlen
//	//非递归写法
//	int i = 0;
//	char arr[10];
//	scanf("%s", arr);
//	char* p = arr;
//	while (*p!='\0')
//	{
//		i++;
//		p++;
//	}
//	printf("%d", i);
//	return 0;
//}

//int add(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1+add(p+1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	//递归和非递归分别实现strlen
//	//递归写法
//	char arr[100];
//	scanf("%s", arr);
//	printf("%d", add(arr));
//	return 0;
//}



//int main()
//{
//	//递归和非递归分别实现求第n个斐波那契数
//	//非递归的写法
//	int x = 1;
//	int y = 1;
//	int n;
//	int i = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	if (n > 2)
//	{
//		for (i = 1; i <= n - 2; i++)
//		{
//			sum = x + y;
//			x = y;
//			y = sum;
//		}
//		printf("第%d个斐波那契数是%d", n, sum);
//	}
//	else
//	{
//		printf("第%d个斐波那契数是%d", n, x);
//	}
//	return 0;
//}


//int add(int n)//函数作用：计算出第N个斐波那契数的值并返回：即add(n)=add(n-1)+add(n-2)
//{
//	int x = 1;
//	int y = 1;
//	int i = 0;
//	if (n > 2)
//	{
//		i = add(n - 1) + add(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//	return i;
//}
//int main()
//{
//	//递归和非递归分别实现求第n个斐波那契数
//	//递归的写法
//	int n;
//	scanf("%d", &n);
//	printf("第%d个斐波那契数是%d",n,add(n));
//	return 0;
//}



//int main()
//{
//	//编写代码在一个整形有序数组中查找具体的某个数.要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//	int arr[] = { 1, 2, 4, 6, 8,16,32,64 };
//	int i = 16;
//	int x = 0;
//	int y = sizeof(arr) / sizeof(arr[0]);
//	while (x < y)
//	{
//		int min = x + (y-x) / 2;
//		if (i < arr[min])//要找的值在中间值左侧。右边界的值要变
//		{
//			y = min;
//		}
//		else if (i>arr[min])//要找的值在中间值右侧，左边界要改变
//		{
//			x = min+1;//此处要记得加1！因为最初始右边界的计算使得中间值下标的取值少1，在改变左边界时务必记得+1。
//		}
//		else
//		{
//			printf("找到了下标是：%d\n", min);
//			break;
//		}
//	}
//	if (x >=y)//当最新的x>=y时，说明经过前面循环的2分查找后没有找到
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//void tgi()
//{
//	printf("***********************\n");
//	printf("******* 1. play *******\n");
//	printf("******* 0. exit *******\n");
//	printf("***********************\n");
//}
//
//void gc()
//{
//	int Tb = rand() % 100 + 1;//生成一个伪随机数给玩家猜
//	int tp = 0;//记录玩家猜数字的次数
//	int i;//玩家输入自己猜的数字
//	while (1)
//	{
//		switch (tp)
//		{
//		case 0:
//			printf("欢迎来到猜数字游戏，接下来是考验的你智商的时候了*（- -）*\n");
//			printf("请输入你猜的数字：-->>");
//			break;
//		case 1:
//			printf("欢迎再次来到猜数字游戏，接下来又是考验的你智商的时候了*（-v v-）*\n");
//			printf("请再次输入你猜的数字：-->>");
//			break;
//		case 2:
//			printf("欢迎再再次来到猜数字游戏，接下来又是考验的你智商的时候了*（-@ @-）*\n");
//			printf("请再次输入你猜的数字：-->>");
//			break;
//		case 3:
//			printf("欢迎再再再次来到猜数字游戏，接下来又是考验的你智商的时候了。要不咱先去脑科挂个号在玩？*（-~~-）*\n");
//			printf("请再次输入你猜的数字：-->>");
//			break;
//		default :
//			printf("(@~~@)老铁别玩了，你的智商不足以支撑你完成这个游戏，咱还是先去脑科看看吧再来吧！（~v v~）\n");
//			break;
//		}
//		scanf("%d", &i);
//		if (i == Tb)
//		{
//			printf("!什么！！你竟然猜对了O.O？放学别走！！\n");
//			break;
//		}
//		else if (i > Tb)
//		{
//			tp++;
//			printf("哎-v.v-,看来你的智商不太够啊。你猜大了哦-<。.。>-\n");
//		}
//		else
//		{
//			tp++;
//			printf("NO!!你的智商真让我崩溃！-@..@-你猜小了\n");
//		}
//	}
//}
//
//int main()
//{
//	//猜数字游戏
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		tgi();
//		printf("请选择:-->>");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			gc();
//			break;
//		case 0:
//			printf("您选择退出游戏\n");
//			break;
//		default:
//			printf("你输入有误，请再次输入\n");
//			break;
//		}
//	} while (i);
//	return 0;
//}
