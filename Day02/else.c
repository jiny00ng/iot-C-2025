///* 구구단 */
//#include <stdio.h>
//
//int main()
//{	
//	/* 연습 */
//	//int i = 0;
//	//for (i = 1; i <= 10; i++) {
//	//	if (i % 2 == 0) continue;			// 건너뛴다
//	//	// if (i == 7) break;					// 반복문을 빠져나온다
//	//	if (i >= 7) break;
//	//	printf("%d\n", i);
//
//	//}
//	
//	/* 전체 구구단 */
//	/*int i;
//	int j;
//	for (i = 2; i < 10; i++) {						// 단 
//		for (j = 1; j < 10; j++) {					// 곱하는 것
//			printf("%d *  %d = %d\n", i, j, i * j);
//		}
//	}*/
//
//	/* 입력값에 따른 구구단 출력 */
//	int i;
//	int input;
//	printf("찾고 싶은 구구단 입력 > ");
//	scanf_s("%d", &input);
//
//	if (input < 2 || input > 9) {
//		printf("2부터 9까지의 숫자만 입력해 주세요.\n");
//		return 1; // 비정상 종료
//	}
//
//	printf("%d단 구구단:\n", input);
//	for (i = 1; i < 10; i++) {
//		printf("%d * %d = %d\n", input, i, input * i);
//	}
//
//	return 0;
//}