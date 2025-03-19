///*
//    문자열
//*/
//#include <stdio.h>
//
//int main()
//{
//    char str[100] = "orange";           // 지역변수를 stack에 저장
//
//    printf("%s\n", str);                // 문자열 변수 출력
//    printf("%s\n", "orange");           // 리터럴 문자열 출력
//    printf("%p\n", "orange");           // 리터럴 문자열의 메모리 주소 출력
//    printf("%c\n", *"orange");          // 문자열의 첫 번째 문자 출력
//    printf("%c\n", *("orange" + 1));    // 두 번째 문자 출력
//    printf("%c\n", "orange"[2]);        // 세 번째 문자 출력
//
//    // 수정할 수 있는 배열에서 문자를 변경
//    str[0] = 'O';                       // 배열을 수정
//    printf("%s\n", str);                // 수정된 문자열 출력
//
//    return 0;
//}
//
