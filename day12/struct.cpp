#include<stdio.h>
//struct[나만의 데이터 타입(구조체)]
typedef int Length;

typedef struct Coffee {// 밑 함수와 차이 비교하며 보기
	char name[30];
	double calories;
	int price;

} Coffee;
struct Chobap {
	char name[30];
	char fish[30];
	double cal;
};


int main() {
	//int a = 1;
	//char b = 'b';
	//Coffee americano = {"americano",5,2500}; //structcoffee가 데이터 타입이고 americano가 변수
	//printf("해당 커피의 이름은 %s 칼로리는 %1f 가격은 %d입니다.\n", americano.name, americano.calories, americano.price);

	//Chobap me = { "연어초밥","연어",25}; //structcoffee가 데이터 타입이고 americano가 변수
	//printf("이름은 %s 생선은는 %s 칼로리는 %lf입니다.\n", me.name, me.fish, me.cal);

	Coffee menu[3];
	for (int i = 0; i < 3; i++) {
		printf("메뉴 입력");
		scanf("%s", &menu[i].name);
		printf("칼로리 입력");
		scanf("%lf", &menu[i].calories);
		printf("가격 입력");
		scanf("%d", &menu[i].price);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s  %lf  %d\n", menu[i].name, menu[i].calories, menu[i].price);
	}

	return 0;
}
