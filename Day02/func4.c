/* 
	함수 원형, 함수호출, 함수 정의
*/
#include <stdio.h>

int main() {
    int num1, num2;
    char oper;

    printf("계산기 프로그램입니다.\n");

    while (1) {
        printf("두 개의 정수를 입력하세요: ");
        scanf_s("%d %d", &num1, &num2);
        getchar();  // To consume the newline character left by the previous input
        printf("연산자를 입력하세요(+, -, *, / ). 종료하려면 q 입력: \n");
        scanf_s("%c", &oper, 1);  // Corrected to use &oper

        if (oper == 'q') {
            break;
        }

        switch (oper) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            }
            else {
                printf("0으로 나눌 수 없습니다.\n");
            }
            break;
        default:
            printf("잘못된 연산자입니다.\n");
        }
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}









//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}