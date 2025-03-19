///*배열
//	동일한 자료형을 연속적을 저장할 수 있는 저장공간
//*/
//#include <stdio.h>
//
//int main()
//{
//	char str[10] = "banana";			// 문자타입(크기) 배열 선언
//
//	printf("str: %s\n", str);
//	printf("str[0]: %c\n", str[0]);
//	printf("str[1]: %c\n", str[1]);
//	printf("str[5]: %c\n", str[5]);
//	printf("str[6]: %c\n", str[6]);
//	printf("str[6]: %s\n", str[6]);		// 문자열 끝에는 null값이 출력(마침표 역할)
//
//	char str2[6] = "apple";				// 문자 배열은 문자길이 + 1(null값)을 해줘야 함
//	printf("str2: %s\n", str2);
//	str2[0] = 'A';
//	printf("str2: %s\n", str2);
//
//	// str = str2;						// 변수에 배열 넣기는 문자 타입이 달라서 안됨(c언어는 엄격!)
//
//	return 0;
//}