#include<stdio.h>
int main() {
	int num1;

	printf(" 10000~99999 ������ �Է����ּ���:");
	scanf("%d", &num1);
	printf("\n%d -> %d", num1, (num1 / 100) % 10);

	printf("\n���� n�� �Է� 20~30�̸� 1��� �ƴϸ� 0����ϼ���:");
	scanf("%d", &num1);
	int n1 = (20 <= num1 && num1 <= 30) ? 1 : 0;
	printf("\n%d", n1);

	printf("\n���� ������ �Է�");
	scanf("%d", &num1);
	int n2 = num1%2==1 ? 1 : 0;
	printf("\n%d", n2);
	int num2;
	printf("\n���� �ٸ� �� ���� �Է�");
	scanf("%d %d", &num1, &num2);
	int n3 = num1 > num2 ? num1 : num2;
	printf("\n%d", n3);



	return 0;

}