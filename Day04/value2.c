///*
//	static
//*/
//#include <stdio.h>
//void incFunc();
//void incFunc2();
//
//int main()
//{
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		incFunc2();
//	}
//	// scnt++;								// 외부에서 정적변수의 접근 불허
//	// printf("%d\n", scnt);
//	return 0;
//}
//void incFunc() {
//	int cnt = 0;
//	cnt++;
//	printf("cnt: %d\t", cnt);
//}
//void incFunc2() {
//	static int scnt = 0;				// 정적지역변수 - 정적변수의 수정은 선언된 블럭 안에서만 가능
//	scnt++;
//	printf("cnt: %d\n", scnt);
//}
//
//int ary[] = { 1 , 2, 3 };
//int ary[행][열];