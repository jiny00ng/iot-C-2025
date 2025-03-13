#include <stdio.h>

int main()
{
	int age;
	char str[50];
	printf("당신의 나이를 입력하시오. > ");
	scanf_s("%d", &age);
	printf("당신의 이름을 입력하시오. > ");
	scanf_s("%s", str, (unsigned)sizeof(str));

	printf("당신의 이름은 %s이고 나이는 %d 입니다.", str, age);

	return 0;
}

	A && B	- AND 논리 연산자
	A & B	- AND 비트 연산자
	A || B
	A | B