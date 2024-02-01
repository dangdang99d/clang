#include<stdio.h>
int main() {
	int mon, day;
	char in;
	printf("당신의 생일 월 ,일입력 \n: ");
	scanf("%d%d", &mon, &day);
	printf("당신의 생일은 %d월 %d일 이군요\n", mon, day);
	printf("당신의 생일 월 ,일입력 \n: ");
	scanf("%d%d", &mon, &day);
	printf("당신의 생일은 %d월 %d일 이군요\n", mon, day);
	getchar();
	printf("알파벳 하나 입력 : ");
	scanf("%c", &in);
	printf("\n%c%c%c\n",in,in,in);
	printf("%c %c\n", in, in);
	printf("%c%c%c", in, in, in);
	return 0;
}