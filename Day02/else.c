///* ������ */
//#include <stdio.h>
//
//int main()
//{	
//	/* ���� */
//	//int i = 0;
//	//for (i = 1; i <= 10; i++) {
//	//	if (i % 2 == 0) continue;			// �ǳʶڴ�
//	//	// if (i == 7) break;					// �ݺ����� �������´�
//	//	if (i >= 7) break;
//	//	printf("%d\n", i);
//
//	//}
//	
//	/* ��ü ������ */
//	/*int i;
//	int j;
//	for (i = 2; i < 10; i++) {						// �� 
//		for (j = 1; j < 10; j++) {					// ���ϴ� ��
//			printf("%d *  %d = %d\n", i, j, i * j);
//		}
//	}*/
//
//	/* �Է°��� ���� ������ ��� */
//	int i;
//	int input;
//	printf("ã�� ���� ������ �Է� > ");
//	scanf_s("%d", &input);
//
//	if (input < 2 || input > 9) {
//		printf("2���� 9������ ���ڸ� �Է��� �ּ���.\n");
//		return 1; // ������ ����
//	}
//
//	printf("%d�� ������:\n", input);
//	for (i = 1; i < 10; i++) {
//		printf("%d * %d = %d\n", input, i, input * i);
//	}
//
//	return 0;
//}