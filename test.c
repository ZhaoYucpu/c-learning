#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <errno.h>
//#include <limits.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//static int read_integer(int *value)
//{
//	char line[128];
//	char *end;
//	long parsed;
//
//	if (fgets(line, sizeof(line), stdin) == NULL)
//		return 0;
//
//	/* Discard an overlong input line so its remainder cannot become later guesses. */
//	if (strchr(line, '\n') == NULL && !feof(stdin))
//	{
//		int ch;
//		while ((ch = getchar()) != '\n' && ch != EOF)
//			;
//		return 0;
//	}
//
//	errno = 0;
//	parsed = strtol(line, &end, 10);
//	if (end == line || errno == ERANGE || parsed < INT_MIN || parsed > INT_MAX)
//		return 0;
//
//	while (*end == ' ' || *end == '\t' || *end == '\r' || *end == '\n')
//		++end;
//	if (*end != '\0')
//		return 0;
//
//	*value = (int)parsed;
//	return 1;
//}
//static void play_game(void)
//{
//	int round = 1;
//
//	for (;; ++round)
//	{
//		int answer = rand() % 100 + 1;
//		int guess;
//		int attempts;
//		time_t start = time(NULL);
//		int won = 0;
//
//		printf("\n===== 第 %d 轮 =====\n", round);
//		printf("我已经想好一个 1 到 100 之间的整数，你有 6 次机会。\n");
//
//		for (attempts = 1; attempts <= 6;)
//		{
//			printf("第 %d/6 次，请猜：", attempts);
//			if (!read_integer(&guess))
//			{
//				if (feof(stdin))
//					return;
//				printf("请输入有效的整数。\n");
//				continue;
//			}
//			if (guess < 1 || guess > 100)
//			{
//				printf("数字必须在 1 到 100 之间，这次不计入机会。\n");
//				continue;
//			}
//
//			if (guess == answer)
//			{
//				won = 1;
//				break;
//			}
//			if (guess > answer)
//				printf("猜大了！再小一点。\n");
//			else
//				printf("猜小了！再大一点。\n");
//			++attempts;
//		}
//
//		if (won)
//			printf("猜对了！答案是 %d。\n", answer);
//		else
//			printf("6 次机会用完了，本轮答案是 %d。\n", answer);
//		printf("本轮用时：%.0f 秒。\n", difftime(time(NULL), start));
//		printf("准备开始下一轮……\n");
//	}
//}
//
//int main(void)
//{
//	int choice;
//	srand((unsigned int)time(NULL));
//
//	for (;;)
//	{
//		printf("\n---- 猜数字游戏 ----\n");
//		printf("1. 开始游戏\n2. 退出游戏\n请选择：");
//		if (!read_integer(&choice))
//		{
//			if (feof(stdin))
//				break;
//			printf("请输入 1 或 2。\n");
//			continue;
//		}
//
//		if (choice == 1)
//			play_game();
//		else if (choice == 2)
//		{
//			printf("退出游戏。\n");
//			break;
//		}
//		else
//			printf("选项无效，请输入 1 或 2。\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };//这是数组的表示方法，int表示数组元素的类型，arr1是数组名称，【】代表数组元素的个数。arr1[]表示下标即数组中元素的位置，数组元素的下标范围为0-（【】-1）
//	int i = 0;
//	/*for (i = 0;i <5;i++)
//	{
//		 arr1[i] = -(i + 1);
//
//	}*/
//	for (i = 0;i < 5;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	float arr2[4] = { 1.2,2.3,3.4,4.5 };
//	for(i = 0;i < 4;i++)
//	{
//		printf("arr2[%d]=%p\n", i, &arr2[i]);//%p是用来打印地址，可以发现数组的元素在内存中是连续存在的，随着下标的增长，元素内存也随着由低到高
//		}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8};//这是数组的初始话的一种形式
//	//printf("%zu\n", sizeof(arr));
//	//printf("%zu\n", sizeof(arr[0]));
//	int a = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < a;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	    int arr[3][5] = { 0 };
////这是二位数组  行 列   二位数组的下标先行后列，均是从零开始     二位数组的初始化的独特int arr[3][5]={{1,2},{3,4},{4,5}},其余与一维相同
//		//二维数组的内存占用与一维相同，都是连续的
//	for (a = 0;a < 3;a++)
//	{
//		
//		for (b = 0;b < 5;b++)
//		{
//			scanf("%d",& arr[a][b]);
//		}
//		
//	}
//	for (a = 0;a < 3;a++)
//	{
//		
//		for(b=0;b<5;b++)
//		{
//			printf("%d ", arr[a][b]);
//		}printf("\n");
//	}
//
//	return 0;
//}
//void set_arr(int arr3[3][5], int r,int n)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < n;j++)
//		{
//			arr3[i][j] =-1;
//		}
//	}
//}
//void print_arr(int arr2[3][5], int r,int n)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < n;j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {0};
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,3,5);
//	print_arr(arr,3,5);
//
//	return 0;
//}
//利用数组做函数时，传递函数名即arr这种，还要带上有几个元素，做形参时，形参与实参均共用一个函数，不会像其他函数那样再开辟一个空间，因此函数调用之后，改动不会消失
//如果是二维数组，传参时不仅要传函数名，还要传递行数与列数，其他与以为数组相同
// #include "is_leap_year.h"
// int main()
// {
// 	int year = 0;
// 	scanf("%d", &year);
// 	if (is_leap_year(year))
// 		printf("是闰年\n");
// 	else
// 		printf("不是闰年\n");
// 	return 0;
// }
// int fac(int n)
// {
// 	int sum=1;
// 	if(n == 1)
// 	sum=1;
// 	else
// 	{
// 		sum = n * fac(n - 1);}
// 	return sum;
// }
// int main()
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	int ret = fac(n);
// 	printf("%d\n", ret);
// 	return 0;
// }
// int fabna(int x)
// {
// 	if (x == 1 || x == 2)
// 		return 1;
// 	else
// 		return fabna(x - 1) + fabna(x - 2);
// }
// int main()
// {
// 	int n=0;
// 	scanf("%d",&n);
// 	int sum=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		int b=fabna(i);
// 		sum+=b;
// 	}
// 	printf("%d",sum);
// 	return 0;
// }

// int main()
// {
//      int a=-10;
// 	 //左移运算符<<，将a的二进制位向左移动一位，相当于乘以2,剩下的位补0，下面以-10为例
// 	 // 10000000000000000000000000001010 -10的原码
// 	 // 11111111111111111111111111110101 -10的反码
// 	 // 11111111111111111111111111110110 -10的补码
// 	 int b=a<<1; //we can see that the result of "<<"is multiplied by the corresponding multiple of 2
// 	 // 11111111111111111111111111101100 a<<1的结果，此时还是补码
//      // 10000000000000000000000000010011
// 	 // 10000000000000000000000000010100 a<<1的结果的原码
// 	 printf("%d\n",b);
// 	 printf("%d\n",a);
// 	return 0;
// }

// int main()
// {
//    int a=-12;
//    //右移运算符>>，将a的二进制位向右移动一位，相当于除以2,剩下的位补符号位，下面以-12为例
//    // 10000000000000000000000000001100 -12的原码
//    // 11111111111111111111111111110011 -12的反码
//    // 11111111111111111111111111110100 -12的补码
//    int b=a>>1;//we can see that the result of ">>"is divided by the corresponding multiple of 2
//    // 11111111111111111111111111111010 a>>1的结果，此时还是补码
//    // 10000000000000000000000000000101
//    // 10000000000000000000000000000110 a>>1的结果的原码
//    printf("%d\n",a);
//    printf("%d\n",b);
// 	return 0;
// }

int main()
{
   //so next we will talk about the bitwise AND'&,the bitwiseOR'|',the bitwise XOR'^'and the bitwiseNOT'~'
   //first,let's talk about the bitwise AND'&'
   int a=-5;
   // 10000000000000000000000000000101 the true formof -5
   // 11111111111111111111111111111010 the inverse form of -5
   // 11111111111111111111111111111011 the complement form of -5
   int b=10;
   // 00000000000000000000000000001010 the complement form of 10
   int c=a&b;
    // 11111111111111111111111111111011 the complement form of -5
	// 00000000000000000000000000001010 the complement form of 10
	// 00000000000000000000000000001010 the result of a&b  the ture form 
   printf("%d\n",c);
   // therefore,it's not difficult to see that the operation logic of bitwiseAND is:if there
   // is a a0,the result is 0;only when both are 1, the result is 1

   //next,let's talk about the bitwise OR'|'
   int d=a|b;
    // 11111111111111111111111111111011 the complement form of -5
	// 00000000000000000000000000001010 the complement form of 10
	// 11111111111111111111111111111010 the result of a|b  the ocmplement form
	// 10000000000000000000000000000101 the result of a|b  the true form
   printf("%d\n",d);
   // therefore,it's not difficult to see that the operation logic of bitwise OR is:if there
   // is a 1, the result is 1;only when both are 0, the result is 0

   //next,let's talk about the bitwise XOR'^'
   int e=a^b;
	// 11111111111111111111111111111011 the complement form of -5
	// 00000000000000000000000000001010 the complement form of 10
	// 11111111111111111111111111110001 the result of a^b  the complement form
	// 10000000000000000000000000001111 the result of a^b  the true form
   printf("%d\n",e);
   // therefore,it's not difficult to see that the operation logic of bitwise XOR is:
   // if the two bits are the same, the result is 0;if the two bits are different, the result is 1

   //finallly,let's talk about the bitwise NOT'~'
   int f=~a;
	// 11111111111111111111111111111011 the complement form of -5
	// 00000000000000000000000000000100 the result of ~a  the complement form
	// 00000000000000000000000000000100 the result of ~a  the true form
   printf("%d\n",f);
   // therefore,it's not difficult to see that the operation logic of bitwise NOT is:
   // if the bit is 0, the result is 1;if the bit is 1, the result is 0
	return 0;
}