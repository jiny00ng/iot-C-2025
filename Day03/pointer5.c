///* 배열과 포인터 */
//#include <stdio.h>
//
//int main()
//{
//	int ary[5];
//	int* p = ary;
//	
//	*(p + 0) = 10;
//	printf("*p: %d, ary[0]: %d\n", *p, ary[0]);
//	printf("p: %d\n", p);
//	printf("p + 1: %d\n", p + 1);
//	
//	
//	*(p + 1) = 20;
//	printf("*(p + 1): %d, ary[1]: %d\n", *(p+1), ary[1]);
//	printf("p[1]: %d\n", p[1]);			// [ ] == *( ): 포인트 연산식
//
//
//	return 0;
//}