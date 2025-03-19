///*
//	메모리 동적 할당: malloc - free
//	calloc - 메모리를 동적 할당하여 0으로 초기화. calloc(블록 개수, 블록 크기)
//	realloc - 기존에 할당된 메모리의 크기를 재조정
//*/
//#include <stdio.h>
//#include <stdlib.h>		// 헤더파일 포함
//
//int main()
//{
//	int* pi = (int*)malloc(sizeof(int));		// 힙영역에 입력크기만큼 메모리 공간을 할당 받아서 시작 주소를 리턴
//	if (pi == NULL) 
//		printf("메모리 할당 실패");
//		exit(1);
//	}
//	printf("할당 성공!");
//	
//	free(pi);
//
//	return 0;
//}