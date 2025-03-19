///*
//	함수 포인터
//*/
//#include <stdio.h>
//
//int sum(int, int);
//int min(int, int);
//void func(int, int);
//
//int main()
//{
//	int (*fp)(int, int);
//	int res;
//	// res = sum(20, 10);
//	// res = min(20, 10);
//	fp = sum;
//	res = fp(20, 10);
//	printf("res: %d\n", res);
//	func(20, 10);
//	return 0;
//}
//
//int sum(int a, int b)
//{
//	int res = a + b;
//	return res;
//}
//
//int min(int a, int b)
//{
//	int res = a - b;
//	return res;
//}
//
//void func(int (*fp)(int, int)) {
//	int x, y;
//	printf("두 정수를 입력하시오 > ");
//	scanf_s("%d %d", &x, &y);
//	printf("수식 결과: %d\n", fp(x, y));
//
//}