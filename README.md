# iot-C-2025
## 1일차
- C언어
    - 유닉스 운영체제에서 사용하기 위해 개발한 **절차적, 구조적** 프로그래밍 언어
    - 컴파일러 필요 - 프로그래머가 작성한 **소스코드**를 컴퓨터가 이해할 수 있는 **기계어로 변환**하는 소프트웨어 도구
    - C++는 C에서 파생된 객체 지향형 언어 

```
#include <stdio.h>  // 헤더파일
int main()          // OS가 함수 호출
{
    
    return 0;       // 0을 반환해 프로그램이 정상적으로 종료되었음을 OS에 알림
}
```

1. 제어문
- 반복: for, while
    - for문
```
/* for(초기식; 조건식; 증감식) { } */
for (int i = 0; i < 10; i++) {
	printf("i: %d\n", i);
}
```
- while문
```
while (참){
    출력;
}
```
- 선택: if, switch
    - switch문
```
switch (조건식)
    case ~:
        break;  // 루프나 switch문 종료
    default:    // 모든 경우에 해당하지 않는 경우 처리
        break;
```

2. 배열(array)
    - **배열 이름 : 배열의 첫번째 주소(arr[0])** -> &주소연산자 필요 없이 입력값 저장 가능
        ```
        arry[i] == *(arr + 1)
        ```
    - **for문** 으로 제어해야 함
    - 배열 : 동일한 자료형을 연속적으로 저장하는 공간(고정 크기)
    - 리스트 : 다양한 자료형을 저장하는 공간(동적 크기)
- 예제
```
#include <stdio.h>  // 표준 입출력 함수를 사용하기 위한 헤더 파일

int main() {
    char str[50];    // 최대 49자 + 널 종료 문자('\0')를 저장할 수 있는 문자열 배열 선언
    int num;

    printf("당신의 이름과 나이를 입력하시오: ");
    // (unsigned)sizeof(str): 문자열 입력 시 최대 크기(바이트)를 unsigned로 전달
    // &num: 정수형 변수의 주소를 전달하여 입력값을 저장   
    scanf_s("%s %d", str, (unsigned)sizeof(str), &num);     // 공백을 기준으로 입력이 끊어질 수 있음
    fgets(str, sizeof(str), stdin);
    printf("당신의 이름은 %s이고 나이는 %d 입니다.", str, num);

    return 0;
}
```

## 2일차
- C언어
3. 보수법(Complement System)
        - 보충 해주는 수 - 컴퓨터 시스템에서 정수의 음수 표현
        - A에 대한 B의 보수 == (A = B + C)
        1. 1의 보수 : 양수의 이진수를 구한 뒤 각 비트를 반전 (+0, -0 발생)
        2. 2의 보수 : 양수의 이진수를 구한 뒤 각 비트를 반전 + 1 -> 단 하나의 0만 존재하여 두개의 0 문제 해결!
```
#include <stdio.h>

int main() {
    unsigned int num = 5; // 00000101
    printf("1의 보수: %u\n", ~num);          // 비트 반전
    printf("2의 보수: %u\n", (~num) + 1);    // 비트 반전 후 +1
    return 0;
}
```
4. 함수 
```
// 함수 선언
int add(int a, int b);

int main() {
    int result = add(3, 5);
    printf("3 + 5 = %d\n", result);
    return 0;
}

// 함수 정의
int add(int a, int b) {
    return a + b;
}
```

## 3일차 
- C언어
5. 포인터 변수 
    - 주소를 저장할 수 있는 변수
    - 포인터 주소의 크기는 컴퓨터 환경에 따라 다름 
        int* p : int 타입(주소 종류) 포인터 변수 선언
        printf("포인터 변수 p가 가리키는 곳의 값: %d\n", *p);	// * 간접참조 연산자
```
int arr[3] = {10, 20, 30};
int *p = arr;

for (int i = 0; i < 3; i++) {
    printf("arr[%d] = %d, *(p + %d) = %d\n", i, arr[i], i, *(p + i));
}
```

## 4일차
- C언어
6. 문자열 입력 함수
- getcahr 
    - 문자를 하나씩 입력 받음
    - 입력한 문자를 배열에 저장하고 인덱스 증가
    - 문자열 끝에 NULL 문자('\0')를 추가하여 문자열 종료
- fgets(str, size, stdin) 
    - 표준 입력(stdin)으로부터 문자열을 입력받아 str에 저장
    - fgets는 최대 (size - 1)개의 문자만 읽고, 마지막에 '\0'을 자동으로 추가해 문자열을 종료시킴
    - 입력된 문자열에 '\n'(개행 문자)가 포함될 수 있음

7. 메모리
    - Data
        - 힙: 사용자에게 할당된 메모리 영역
        - stack: 지역변수, 매개변수
        - data: 전역변수, static
        - Readonly: 문자열 상수, 리터럴
    - Code
        - (사용자)함수
        - 제어문
        
8. 변수
    - 전역변수 : 프로그램 전체에 저장
    - 지역변수 : 브록 안에서만 사용, 매개변수, 자동변수
    - 정적변수 : 전역 + 지역

9. 포인터(*)
    - 포인터 배열: 포인터를 저장할 수 있는 배열 
    ```
    int* pary[];
    ```
    - 배열 포인터: 배열을 가리키는 포인터
    ```
    int(* pary)[];
    ```

## 5일차
- C언어
10. 메모리 할당
    - malloc - free: 메모리 동적할당
    - calloc - 메모리를 동적 할당하여 0으로 초기화. calloc(블록 개수, 블록 크기)
    - realloc - 기존에 할당된 메모리의 크기를 재조정

11. 구조체(struct 구조체명 {멤버 변수}) 
    - 사용자 정의 자료형
    - 기존 자료형을 묶어서 만든 복합 자료형(type - 크기)
    - 멤버접근 연산자(.) - 구조체 변수를 통해서 멤버에 접근하는 방법
    - 구조체 포인터 연산자(->) - 구조체 포인터를 통해서 멤버에 접근하는 방법
```
// Vision이라는 구조체를 정의, 왼쪽 시력(left)과 오른쪽 시력(right)을 저장
typedef struct vision {
    double left;
    double right;
} Vision;

// Vision 구조체를 입력받아 left와 right를 교환한 후 반환하는 함수
Vision exchange(Vision v) {
    double temp = v.left;  
    v.left = v.right;      
    v.right = temp;        
    return v;              // 교환된 구조체 반환
}

int main() {
    Vision rot;    // Vision 타입의 변수 rot 선언

    
    printf("시력 입력 (왼쪽 오른쪽) > ");
    scanf_s("%lf %lf", &rot.left, &rot.right); // 실수형(double) 입력을 받아 rot에 저장

    // exchange 함수를 호출하여 시력을 교환하고, 결과를 다시 rot에 저장
    rot = exchange(rot);

    // 교환된 시력을 출력
    printf("바뀐 시력: %.1lf %.1lf\n", rot.left, rot.right);

    return 0;  // 프로그램 종료
} 
```

