///* 
//	pointer - �ּ�
//	������ ���� - �ּҸ� ������ �� �ִ� ����(4Byte)
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	//int p;		// int Ÿ�� ���� ����
//	//int* p;		// int Ÿ��(�ּ� ����) ������ ���� ����(4Byte ũ��)
//	//char* pc;	// char Ÿ�� ������ ���� ����(4Byte ũ��)
//	//double *pd; // double Ÿ�� ������ ���� (* ��ġ�� ��� ����)
//
//	int num = 100;
//	printf("num�� �ּ�: %p\n", &num);
//	printf("num�� ��: %d\n", num);
//	int* p = &num;											// * �ƹ� �ǹ̾��� ǥ��
//	printf("������ ���� p�� ����� ��: %p\n", p);
//	printf("������ ���� p�� ����Ű�� ���� ��: %d\n", *p);	// * �������� ������
//	num += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//	*p += 1;
//	printf("num: %d, *p: %d\n", num, *p);
//
//	return 0;
//}