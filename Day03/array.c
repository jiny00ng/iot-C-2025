///* 
//배열 - 동일한 자료형을 연속적으로 저장하는 공간(고정 크기)
//리스트 - 다양한 자료형을 저장하는 공간(동적 크기)
//*/
//#include <stdio.h>
//
//int main()
//{
//	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언 - 20Byte 
//	int ary2[] = { 6 , 7, 8, 9, 10 };
//	int ary3[5];						// { 0, 0, 0, 0, 0 }
//	// int ary4[];
//
//	for (int i = 0; i < 5; i++) {
//		printf("ary[%d]: %d\t", i, ary[i]);
//		printf("ary2[%d]: %d\n", i, ary2[i]);
//	}
//	
//	ary[2] = 100;
//	printf("ary[2]: %d", ary[2]);
//
//	return 0;
//}