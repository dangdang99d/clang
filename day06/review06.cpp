#include<stdio.h>
int main() {
	int num;
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);
	if (num < 0)
		printf("�ǳ� ����");
	else if (num <= 40)
		printf("�ǿ� ����");
	else
		printf("������ �ǳ� Ȱ�� ����");

	int num1,num2;
	printf("2�������� �Է��ϼ���:");
	scanf("%d %d", &num1,&num2);

	int a,b,c,d,e, sum=0;
	printf("5���� ������ �Է��ϼ���:");
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
	printf("����:%d", sum);

	int num6, num7;
	printf("�ΰ��� �������� �Է�:");
	scanf("%d %d", &num6, &num7);
	if (num6 > num7)
		printf("%d", num6);
	else
		printf("%d", num7);
	return 0;




}