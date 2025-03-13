///* 
//	pointer - 주소
//	포인터 변수 - 주소를 저장할 수 있는 변수(4Byte)
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	//int p;		// int 타입 변수 선언
//	//int* p;		// int 타입(주소 종류) 포인터 변수 선언(4Byte 크기)
//	//char* pc;	// char 타입 포인터 변수 선언(4Byte 크기)
//	//double *pd; // double 타입 포인터 변수 (* 위치는 상관 없음)
//
//	int num = 100;
//	printf("num의 주소: %p\n", &num);
//	printf("num의 값: %d\n", num);
//	int* p = &num;											// * 아무 의미없는 표시
//	printf("포인터 변수 p에 저장된 값: %p\n", p);
//	printf("포인터 변수 p가 가리키는 곳의 값: %d\n", *p);	// * 간접참조 연산자
//	num += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//	*p += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//
//	return 0;
//}