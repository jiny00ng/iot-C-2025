///* ������ �迭 */
//#include <stdio.h>
//
//int main()
//{
//	int ary[] = { 1, 2, 3 };
//
//	printf("�迭�� ��üũ��: %d\n", sizeof(ary));
//	printf("�迭 �� �Ѱ��� ũ��: %d\n", sizeof(ary[0]));
//	printf("�迭�� ���� ����: %d\n", sizeof(ary) / sizeof(ary[1]));
//	printf("�迭 �̸�: %p\n", ary);			// �迭�̸� - �迭�� ���� �ּ�
//	printf("�迭�� ù��° �� �ּ�: %p\n", &ary[0]);
//	printf("�迭�� �ι�° �� �ּ�: %p\n", ary + 1);			// �ּҰ��� ũ��� 4Byte
//	printf("�迭�� �ι�° �� �ּ�: %p\n", &ary[1]);
//
//	// �ټ��� ���� �ּ�
//	int ary2[] = { 1, 2, 3, 4, 5 };
//	
//	for (int i = 0; i < 5; i++) {
//		printf("�迭�� %d° �� �ּ�: %p\n", i + 1 , &ary2[i]);
//	}
//
//	int score[10] = { 0, };
//	int size = sizeof(score) / sizeof(score[0]);
//
//	for (int i = 0; i < size; i++) {
//		printf("������ �Է��ϼ���: ");
//		scanf("%d", &score[i]);
//	}
//
//	return 0;
//}