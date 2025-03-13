//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n = 30;
//	int res;
//	
//	res = (n > 10) && (n < 20);
//	printf("res: %d\n", res);
//	res = (n < 10) || (n > 20);
//	printf("res: %d\n", res);
//	res = !(n >= 30);				// ! : 논리 부정 연산자. 참: 0, 거짓: 0 이외의 값
//	printf("res: %d\n", res);
//
//	res = ~n;						// ~ : 비트 반전 연산자 - 정수(음수일 수 있음)
//
//	res = n << 1;
//	printf("res: %x\n", res);
//	res = n >> 1;
//	printf("res: %x\n", res);
//
//	int n2 = 143;					// 0b 1000 1111
//	res = n2 << 1;					// 0b 1 0001 1110
//	printf("res: %x\n", res);
//	res = n2 >> 1;					// 0b 0100 0111
//	printf("res: %x\n", res);
//
//	return 0;
//}