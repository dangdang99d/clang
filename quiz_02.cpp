#include<stdio.h>
int main() {
	int age, number ;
	double tall;
	printf("����� ���� �Է�");
	scanf("%d", &age);
	printf("����� Ű �Է�");
	scanf("%lf", &tall);
	printf("����� �й� �Է�");
	scanf("%d", &number);
	printf("����� ���̴�%d �̰� ����� Ű�� %.1lf�̰� �й���%d", age, tall, number);
	return 0;

}