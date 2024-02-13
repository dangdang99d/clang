#include<stdio.h>
int main() {
	int num1;

	printf(" 10000~99999 정수를 입력해주세요:");
	scanf("%d", &num1);
	printf("\n%d -> %d", num1, (num1 / 100) % 10);

	printf("\n정수 n을 입력 20~30이면 1출력 아니면 0출력하세요:");
	scanf("%d", &num1);
	int n1 = (20 <= num1 && num1 <= 30) ? 1 : 0;
	printf("\n%d", n1);

	printf("\n양의 정수를 입력");
	scanf("%d", &num1);
	int n2 = num1%2==1 ? 1 : 0;
	printf("\n%d", n2);
	int num2;
	printf("\n서로 다른 두 정수 입력");
	scanf("%d %d", &num1, &num2);
	int n3 = num1 > num2 ? num1 : num2;
	printf("\n%d", n3);



	return 0;

}