/* 
	�Լ� ����, �Լ�ȣ��, �Լ� ����
*/
#include <stdio.h>

int main() {
    int num1, num2;
    char oper;

    printf("���� ���α׷��Դϴ�.\n");

    while (1) {
        printf("�� ���� ������ �Է��ϼ���: ");
        scanf_s("%d %d", &num1, &num2);
        getchar();  // To consume the newline character left by the previous input
        printf("�����ڸ� �Է��ϼ���(+, -, *, / ). �����Ϸ��� q �Է�: \n");
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
                printf("0���� ���� �� �����ϴ�.\n");
            }
            break;
        default:
            printf("�߸��� �������Դϴ�.\n");
        }
    }

    printf("���α׷��� �����մϴ�.\n");
    return 0;
}









//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}