#include<stdio.h>
int main() {
	int mon, day;
	char in;
	printf("����� ���� �� ,���Է� \n: ");
	scanf("%d%d", &mon, &day);
	printf("����� ������ %d�� %d�� �̱���\n", mon, day);
	printf("����� ���� �� ,���Է� \n: ");
	scanf("%d%d", &mon, &day);
	printf("����� ������ %d�� %d�� �̱���\n", mon, day);
	getchar();
	printf("���ĺ� �ϳ� �Է� : ");
	scanf("%c", &in);
	printf("\n%c%c%c\n",in,in,in);
	printf("%c %c\n", in, in);
	printf("%c%c%c", in, in, in);
	return 0;
}