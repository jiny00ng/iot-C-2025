//#include <stdio.h>  // 표준 입출력 함수를 사용하기 위한 헤더 파일
//
//// 사칙연산 함수들의 원형(선언)
//int add(int, int);       // 덧셈 함수
//int subtract(int, int);  // 뺄셈 함수
//int multiply(int, int);  // 곱셈 함수
//int divide(int, int);    // 나눗셈 함수
//
//// 함수 포인터를 인자로 받는 함수 원형
//void func(int (*fp)(int, int));
//
//int main() {
//    int (*fp)(int, int) = NULL;  // 함수 포인터를 NULL로 초기화
//    char op;                     // 사용자가 입력할 연산자를 저장할 변수
//
//    // 사용자로부터 연산자 입력받기
//    printf("사칙 연산을 입력하시오 (+, -, *, /) > ");
//    scanf_s(" %c", &op, 1);      // 연산자 입력 (공백 추가로 개행문자 방지)
//
//    // 입력된 연산자에 따라 함수 포인터에 해당 연산 함수 할당
//    switch (op) {
//    case '+':                // '+' 입력 시
//        fp = add;            // 함수 포인터에 add 함수 할당
//        break;
//    case '-':                // '-' 입력 시
//        fp = subtract;       // 함수 포인터에 subtract 함수 할당
//        break;
//    case '*':                // '*' 입력 시
//        fp = multiply;       // 함수 포인터에 multiply 함수 할당
//        break;
//    case '/':                // '/' 입력 시
//        fp = divide;         // 함수 포인터에 divide 함수 할당
//        break;
//    default:                 // 잘못된 연산자 입력 시
//        printf("지원하지 않는 연산자입니다.\n"); // 에러 메시지 출력
//        return 1;            // 프로그램 종료 (비정상 종료 코드 1 반환)
//    }
//
//    // 연산 함수 호출
//    func(fp);
//
//    return 0;   // 프로그램 정상 종료
//}
//
//// 덧셈 함수 정의
//int add(int a, int b) {
//    return a + b;   // 두 수를 더한 값을 반환
//}
//
//// 뺄셈 함수 정의
//int subtract(int a, int b) {
//    return a - b;   // 두 수를 뺀 값을 반환
//}
//
//// 곱셈 함수 정의
//int multiply(int a, int b) {
//    return a * b;   // 두 수를 곱한 값을 반환
//}
//
//// 나눗셈 함수 정의 (0으로 나누기 예외 처리)
//int divide(int a, int b) {
//    if (b == 0) {   // 두 번째 입력이 0인 경우
//        printf("0으로 나눌 수 없습니다.\n"); // 에러 메시지 출력
//        return 0;    // 기본값 0을 반환
//    }
//    return a / b;   // 두 수를 나눈 값을 반환
//}
//
//// 함수 포인터를 이용해 연산을 수행하는 함수
//void func(int (*fp)(int, int)) {
//    int x, y;    // 사용자가 입력할 두 정수
//
//    // 두 정수 입력받기
//    printf("두 정수를 입력하시오 > ");
//    scanf_s("%d %d", &x, &y);  // 두 정수 입력받기
//
//    // 함수 포인터를 통해 연산 수행 및 결과 출력
//    printf("수식 결과: %d\n", fp(x, y));
//}
