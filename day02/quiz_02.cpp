#include<stdio.h>
int main() {
	int age, number ;
	double tall;
	printf("당신의 나이 입력");
	scanf("%d", &age);
	printf("당신의 키 입력");
	scanf("%lf", &tall);
	printf("당신의 학번 입력");
	scanf("%d", &number);
	printf("당신의 나이는%d 이고 당신의 키는 %.1lf이고 학번은%d", age, tall, number);
	return 0;

}