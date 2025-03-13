///* char형 배열 */		주석처리: Cntrl + / or Cntrl + k + c
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "banana";
//	char str2[6] = "apple";		// char 배열 저장할 때 + 1(**null**이 들어갈 방)
//	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };
//	char str4[10];
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c'; str4[3] = '\0';
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//	printf("str3: %s\n", str3);
//	printf("str3[6]: %s\n", str3[6]);
//	printf("str4 : %s\n", str4);
//	printf("str나머지 방: %s\n", str[50]);
//
//	// str = str2;
//	strcpy(str, str2);			// strcpy(string copy): 문자열 복사
//	printf("str: %s\n", str);
//
//	strcpy(str, "dog");
//	printf("str: %s\n", str);
//
//	str[0] = 'D';
//	printf("str: %s\n", str);
//
//	return 0;
//}
