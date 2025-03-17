//#include <stdio.h>
//
//// Vision이라는 구조체를 정의, 왼쪽 시력(left)과 오른쪽 시력(right)을 저장
//typedef struct vision {         // typedef struct = class
//    double left;
//    double right;
//
//    void move() {};
//} Vision;
//
//// Vision 구조체를 입력받아 left와 right를 교환한 후 반환하는 함수
//Vision exchange(Vision v) {
//    double temp = v.left;  
//    v.left = v.right;      
//    v.right = temp;        
//    return v;              // 교환된 구조체 반환
//}
//
//int main() {
//    Vision rot;    // Vision 타입의 변수 rot 선언
//
//    
//    printf("시력 입력 (왼쪽 오른쪽) > ");
//    scanf_s("%lf %lf", &rot.left, &rot.right); // 실수형(double) 입력을 받아 rot에 저장
//
//    // exchange 함수를 호출하여 시력을 교환하고, 결과를 다시 rot에 저장
//    rot = exchange(rot);
//
//    // 교환된 시력을 출력
//    printf("바뀐 시력: %.1lf %.1lf\n", rot.left, rot.right);
//
//    return 0;  // 프로그램 종료
//}
