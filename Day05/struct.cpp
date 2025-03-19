///*
//	struct(구조체) - 사용자 정의 자료형
//	기존 자료형을 묶어서 만든 복합 자료형(type - 크기)
//*/
//#include <stdio.h>
//#include <stdlibb.h>
//
//struct Human {			// 구조체 선언- struct 구조체명
//	char name[100];		// 멤버 변수1
//	int age;			// 멤버 변수2
//};
//
//int main()
//{
//	/* . 멤버 접근 연산자*/
//	struct Human h;		// human 구조체(자료형)의 변수 h 선언
//	h.age = 30;			// h객체의 멤버 age에 30을 저장
//	// h.name = '홍길동';
//	strcpy(h.name, "hong gilddong");
//
//	char str[100] = "홍길동";
//	printf("%s\n", str);
//	char str2[100];
//	// str2 = 'kim chulsul';
//	// *str2[0] = 'h';
//	str2[0] = 'h';
//	str2[1] = 'o';
//
//	printf("나의 이름은 %s이고 나이는 %입니다.", str2);
//	return 0;
//}