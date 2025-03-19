///*
//	전역변수
//*/
//
//#include <stdio.h>
//void incFunc();
//
//int cnt;					// 전역변수 0으로 자동 초기화 - int cnt= 0;
//
//int main()
//{
//	//int cnt = 0;			// local 지역변수
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		printf("cmt: %d\n", cnt);
//	}
//	cnt++;
//	printf("cmt: %d\n", cnt);
//
//	return 0;
//}
//void incFunc()		// main cnt를 복사해서 _cnt에 저장
//{
//	cnt++;
//	printf("incFunc cnt: %d\n", cnt);
//}