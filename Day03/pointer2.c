///*
//	pointer 주소의 크기는 컴퓨터 환경에 따라 다르다
//*/
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int n;
//	char* pch = &ch;
//	int* pn = &n;
//	printf("char 주소 크기: %d\t", sizeof(&ch));		
//	printf("int 주소 크기: %d\n", sizeof(&n));
//	printf("char 포인터 크기: %d\t", sizeof(pch));
//	printf("int 포인터 크기: %d\n", sizeof(pn));
//	//  컴퓨터 세계에서 1K Byte = 1024 Byte = 2 ^ 10
//	// 포인터 변수 크기 = 주소의 크기
//
//	return 0;
//}