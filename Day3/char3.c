/*
	대문자 소문자 변환
*/
//#include <stdio.h>
//
//int main()
//{
//
//	/*char ch1;
//	char ch2 = 'A';
//	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
//		ch1 = ch2 + ('a' - 'A');
//	}
//	printf("대문자: %c\t", ch2);
//	printf("소문자: %c\n", ch1);*/
//	
//	char ch;
//	printf("문자를 입력하시오 > ");
//	scanf("%c", ch);
//	if (ch == )
//
//
//	return 0;
//}

#include <stdio.h>

int main()
{
    char ch;
    printf("문자를 입력하시오 > ");
    scanf_s("%c", &ch); // 입력받을 때 변수의 주소를 전달해야 합니다.

    if (ch >= 'A' && ch <= 'Z') {
        // 대문자 -> 소문자 변환
        ch = ch + ('a' - 'A');
        printf("소문자로 변환된 문자: %c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        // 소문자 -> 대문자 변환
        ch = ch - ('a' - 'A');
        printf("대문자로 변환된 문자: %c\n", ch);
    }
    else {
        printf("유효한 문자가 아닙니다.\n");
    }

    return 0;
}
