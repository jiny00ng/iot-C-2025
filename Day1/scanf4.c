#include <stdio.h>

int main()
{
	int age;
	char str[50];
	printf("����� ���̸� �Է��Ͻÿ�. > ");
	scanf_s("%d", &age);
	printf("����� �̸��� �Է��Ͻÿ�. > ");
	scanf_s("%s", str, (unsigned)sizeof(str));

	printf("����� �̸��� %s�̰� ���̴� %d �Դϴ�.", str, age);

	return 0;
}

	A && B	- AND �� ������
	A & B	- AND ��Ʈ ������
	A || B
	A | B