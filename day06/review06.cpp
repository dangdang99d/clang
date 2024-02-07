#include<stdio.h>
int main() {
	int num;
	printf("정수를 입력하세요:");
	scanf("%d", &num);
	if (num < 0)
		printf("실내 권장");
	else if (num <= 40)
		printf("실외 권장");
	else
		printf("더워서 실내 활동 권장");

	int num1,num2;
	printf("2개정수를 입력하세요:");
	scanf("%d %d", &num1,&num2);

	int a,b,c,d,e, sum=0;
	printf("5개의 정수를 입력하세요:");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	if (a >= 0)
		sum = sum + a;
	if (b >= 0)
		sum = sum + b;
	if (c >= 0)
		sum = sum + c;
	if (d >= 0)
		sum = sum + d;
	if (e >= 0)
		sum = sum + e;
	printf("합은:%d", sum);

	int num6, num7;
	printf("두개의 서다정수 입력:");
	scanf("%d %d", &num6, &num7);
	if (num6 > num7)
		printf("%d", num6);
	else
		printf("%d", num7);
	return 0;




}