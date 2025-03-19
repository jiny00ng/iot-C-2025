//#define _CRT_SECURE_NO_WARNINGS  // 안전하지 않은 C 런타임 함수 사용에 대한 경고를 끄는 정의
//
//#include <stdio.h>  // 표준 입출력 함수 사용을 위한 헤더 파일
//#include <string.h>  // 문자열 관련 함수 사용을 위한 헤더 파일
//
//int main()
//{
//    char str[100] = "orange";  // 문자 배열 str을 선언하고 "orange"로 초기화
//    char str2[100] = "apple";  // 문자 배열 str2를 선언하고 "apple"로 초기화
//    char* ps = "apple";        // 문자 포인터 ps를 선언하고 "apple"을 가리킴 (문자열 리터럴)
//
//    printf("str: %s\n", str);    // str의 현재 값("orange")을 출력
//    printf("str2: %s\n", str2);  // str2의 현재 값("apple")을 출력
//
//    strcpy(str, str2);           // str2의 값을 str에 복사
//    printf("str: %s\n", str);    // str의 값("apple")을 출력
//    printf("str2: %s\n", str2);  // str2의 값("apple")을 출력 (변경되지 않음)
//
//    strcpy(str, "banana");      // "banana" 문자열을 str에 복사
//    printf("str: %s\n", str);   // str의 값("banana")을 출력
//
//    strcpy(str, ps);           // ps가 가리키는 값("apple")을 str에 복사
//    printf("str: %s\n", str);  // str의 값("apple")을 출력
//
//    /*strcpy(ps, str);       // ps가 가리키는 문자열 리터럴을 변경하려고 시도 (실행 시 오류 발생)
//    printf("ps: %s\n", ps);  // 위 코드가 실행되면 오류가 발생하여 이 코드는 실행되지 않음*/
//
//    //strcpy(str, str2, 3);  //  
//    //puts(str);
//
//    strncpy(str, "abcd", 3);    // strncpy: 시작주소부터 복사할 문자 개수를 설정해서 문자열 복사
//    printf("%s\n", str);
//        
//    return 0;  // 프로그램 종료
//}
