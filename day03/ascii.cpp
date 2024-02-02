#include<stdio.h>
int main() {

	/*char alpha = 'a';
	printf("alpha: %c\n", alpha);
	printf("alpha: %d\n", alpha);*/
	char alpha;
	int alpha1;
	//int big = 65;
	//int small = 97;

	//printf("소문자를 입력하세요: ");
	//scanf("%c", &alpha);
	//printf("%c -> %d", alpha, int(alpha) - small);
	//printf("\n 0~25입력:");
	//scanf("%d", &alpha1);
	
	/*printf("%d -> %c", alpha1, int(big +alpha1));*/
	printf("소문자 입력하시오");
	scanf("%c", &alpha);
	printf("%c -> %c", alpha, int(alpha) -32);
	getchar();  
	printf("대문자 입력하시오");
	scanf("%c", &alpha);
	printf("%c -> %c", alpha, int(alpha) + 32);

	return 0;
}