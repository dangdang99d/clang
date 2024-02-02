#include<stdio.h>
int main() {



	//화씨 온도 : 6335076864.000000
	//	키 몸무게 입력


	int year, num1, num2, num3;
	int c;
	float f;
	float tall, kg;
	printf("태어난 년도를 입력하시오");
	scanf("%d", &year);
	printf("만나이는 :%d", 2024 - year);
	printf("\n세 숫자를 입력");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("세 숫자의 평균은 %.2lf", float((num1 + num2 + num3) / 3));
	printf("\n체온 변환기 섭 씨온도 입력");
	scanf("%d", &c);
	f = c * 5.9 + 32 ;
	printf("\n화씨 온도 :%f", f);
	return 0;
}