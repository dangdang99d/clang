#include<stdio.h>
int main() {
	int a ;
	printf("첫 번쨰 수 입력:");
	scanf("%d", &a);
	int b = 5;
	printf("두 번쨰 수 입력:");
	scanf("%d", &b);
	
	printf("두수의 곱 : %d\n", a * b); // *
	printf("두수의 곱 : %d\n", a / b); //   / 나머지는 없음
	printf("두수의 곱 : %d\n", a % b); // %
	return 0;
}