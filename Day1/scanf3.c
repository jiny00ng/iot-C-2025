//#include <stdio.h>  // 표준 입출력 함수를 사용하기 위한 헤더 파일
//
//
//int main() {
//    char str[50];    // 최대 49자 + 널 종료 문자('\0')를 저장할 수 있는 문자열 배열 선언
//    int num;
//
//    printf("당신의 이름과 나이를 입력하시오: ");
//    // (unsigned)sizeof(str): 문자열 입력 시 최대 크기(바이트)를 unsigned로 전달
//    // &num: 정수형 변수의 주소를 전달하여 입력값을 저장   
//    scanf_s("%s %d", str, (unsigned)sizeof(str), &num);
//    printf("당신의 이름은 %s이고 나이는 %d 입니다.", str, num);
//
//    return 0;
//}