#include<stdio.h>
int main() {



	//ȭ�� �µ� : 6335076864.000000
	//	Ű ������ �Է�


	int year, num1, num2, num3;
	int c;
	float f;
	float tall, kg;
	printf("�¾ �⵵�� �Է��Ͻÿ�");
	scanf("%d", &year);
	printf("�����̴� :%d", 2024 - year);
	printf("\n�� ���ڸ� �Է�");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("�� ������ ����� %.2lf", float((num1 + num2 + num3) / 3));
	printf("\nü�� ��ȯ�� �� ���µ� �Է�");
	scanf("%d", &c);
	f = c * 5.9 + 32 ;
	printf("\nȭ�� �µ� :%f", f);
	return 0;
}