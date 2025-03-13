#include <stdio.h>

void printAry(int* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("ary[%d]: %d\n", i, p[i]);
    }
}

void inputAry(int* p, int size) {
    printf("배열을 입력하시오 (정수 %d개):\n", size);
    for (int i = 0; i < size; i++) {
        printf("ary[%d]: ", i);
        scanf_s("%d", &p[i]);  // scanf_s는 변수의 주소를 필요로 함
    }
}

int main() {
    int ary[5] = { 0, };
    
    int size = sizeof(ary) / sizeof(ary[0]);

    inputAry(ary, size);     // 사용자로부터 배열 입력받기

    printf("입력한 배열 >\n");
    printAry(ary, size);     // 입력받은 배열 출력하기

    return 0;
}



