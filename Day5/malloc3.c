//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    char str[100];
//    char* ps;
//    char input_strings[5][100];  // 배열로 여러 문자열 저장
//
//    // 사용자로부터 문자열을 5번 입력받음
//    for (int i = 0; i < 5; i++) {
//        printf("문자열을 입력하시오 > ");
//        if (fgets(str, sizeof(str), stdin) == NULL) {
//            printf("입력 오류\n");
//            return 1;
//        }
//        str[strcspn(str, "\n")] = 0;  // 개행문자 제거
//
//        // 입력 받은 문자열을 배열에 저장
//        strcpy_s(input_strings[i], sizeof(input_strings[i]), str);
//    }
//
//    // 모든 입력 받은 문자열 출력
//    printf("\n입력 받은 문자열들:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("입력 %d: %s\n", i + 1, input_strings[i]);
//    }
//
//    // 마지막 입력 받은 문자열을 동적 메모리에 복사
//    ps = malloc(strlen(input_strings[4]) + 1);
//    if (ps == NULL) {
//        printf("메모리 할당 실패\n");
//        return 1;
//    }
//
//    // 안전한 문자열 복사
//    strcpy_s(ps, strlen(input_strings[4]) + 1, input_strings[4]);
//    printf("\nheap: %s\n", ps);
//
//    free(ps);  // 메모리 해제
//    return 0;
//}
