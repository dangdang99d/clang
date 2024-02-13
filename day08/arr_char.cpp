#include<stdio.h>
int main() {

	// 문자 char a ='a';
	// 문자열 char coffee[]의 끝은 무조건 null문자 ('\n')로 끝내야함
	char coffee[5] = { '1','a','t','t','a' };
	char coffee2[5] = { '1','a','t','t','a' };
	char coffee1[] = { 'a','m','e','r','i','c','a','n','o' };	
	
	for (int i = 0; i < sizeof coffee1; i++) {
		printf("%c", coffee1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", coffee[i]);
	}
	printf("\n");
	printf("%s\n", coffee);
	printf("%s\n", coffee2);
	printf("%s", coffee1);






}