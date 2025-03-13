///* 정수형 배열 */
//#include <stdio.h>
//
//int main()
//{
//	int ary[] = { 1, 2, 3 };
//
//	printf("배열의 전체크기: %d\n", sizeof(ary));
//	printf("배열 방 한개의 크기: %d\n", sizeof(ary[0]));
//	printf("배열의 방의 개수: %d\n", sizeof(ary) / sizeof(ary[1]));
//	printf("배열 이름: %p\n", ary);			// 배열이름 - 배열의 시작 주소
//	printf("배열의 첫번째 방 주소: %p\n", &ary[0]);
//	printf("배열의 두번째 방 주소: %p\n", ary + 1);			// 주소값의 크기는 4Byte
//	printf("배열의 두번째 방 주소: %p\n", &ary[1]);
//
//	// 다섯개 방의 주소
//	int ary2[] = { 1, 2, 3, 4, 5 };
//	
//	for (int i = 0; i < 5; i++) {
//		printf("배열의 %d째 방 주소: %p\n", i + 1 , &ary2[i]);
//	}
//
//	int score[10] = { 0, };
//	int size = sizeof(score) / sizeof(score[0]);
//
//	for (int i = 0; i < size; i++) {
//		printf("점수를 입력하세요: ");
//		scanf("%d", &score[i]);
//	}
//
//	return 0;
//}