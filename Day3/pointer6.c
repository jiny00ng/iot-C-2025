#include <stdio.h>

void printAry(int* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("ary[%d]: %d\n", i, p[i]);
    }
}

void inputAry(int* p, int size) {
    printf("�迭�� �Է��Ͻÿ� (���� %d��):\n", size);
    for (int i = 0; i < size; i++) {
        printf("ary[%d]: ", i);
        scanf_s("%d", &p[i]);  // scanf_s�� ������ �ּҸ� �ʿ�� ��
    }
}

int main() {
    int ary[5] = { 0, };
    
    int size = sizeof(ary) / sizeof(ary[0]);

    inputAry(ary, size);     // ����ڷκ��� �迭 �Է¹ޱ�

    printf("�Է��� �迭 >\n");
    printAry(ary, size);     // �Է¹��� �迭 ����ϱ�

    return 0;
}



