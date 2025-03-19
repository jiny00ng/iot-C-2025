#include <stdio.h>

typedef struct addr {
    char name[20];
    int age;
    char tel[20];
    char addr[100];
} Addr;

// print_list 함수 정의
void print_list(Addr list[]) {
    for (int i = 0; i < 3; i++) {
        printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    }
}

int main() {
    // 구조체 배열 초기화
    Addr list[3] = {
        {"홍길동", 100, "010-1234-4321", "몰라"},
        {"김철수", 33, "010-2345-2222", "부산"},
        {"김영희", 23, "010-3456-3333", "서울"}
    };

    // print_list 함수를 호출하여 배열을 출력
    print_list(list);

    return 0;
}
