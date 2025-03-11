# iot-C-2025
## 1일차
- C언어
: 유닉스 운영체제에서 사용하기 위해 개발한 절차적, 구조적 프로그래밍 언어
    - 컴파일러 필요 : 프로그래머가 작성한 **소스코드**를 컴퓨터가 이해할 수 있는 **기계어로 변환**하는 소프트웨어 도구
    - C++는 C에서 파생된 객체 지향형 언어 
#include <stdio.h>     // 헤더파일
'''
int main()              // OS가 함수 호출
{
    
    return 0;
}
'''
1. 조건문
    - 반복: while
    - 조건: for, if
'''
for (int i = 0; i < 5; i++) {
	printf("ary[%d]: %d\n", i, ary[i]);
}
'''
2. 배열
    - 배열 이름 : 배열의 첫번째 주소 -> &주소연산자 필요 없이 입력값 저장 가능

- 예제
#include <stdio.h>  // 표준 입출력 함수를 사용하기 위한 헤더 파일


int main() {
    char str[50];    // 최대 49자 + 널 종료 문자('\0')를 저장할 수 있는 문자열 배열 선언
    int num;

    printf("당신의 이름과 나이를 입력하시오: ");
    // (unsigned)sizeof(str): 문자열 입력 시 최대 크기(바이트)를 unsigned로 전달
    // &num: 정수형 변수의 주소를 전달하여 입력값을 저장   
    scanf_s("%s %d", str, (unsigned)sizeof(str), &num);
    printf("당신의 이름은 %s이고 나이는 %d 입니다.", str, num);

    return 0;
}

## 2일차