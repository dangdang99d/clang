#include<stdio.h>
typedef struct Coffee {
	char name[20];
	int price;
	char size[20];
	int caffeine;

};
void RaisePrice(Coffee*x) {
	x->price = x->price + 100;
}
void DownPrice(Coffee* x) {
	x->price = x->price - 1000;
}
void showinfor(Coffee*x) {
	printf("�̸�:%s ����:%d ������%s  ī����%d ", x->name, x->price,x->size,x->caffeine);
}

int main() {
	Coffee a = { "americano",4500,"tall",100 };
	Coffee* pCoffee;
	pCoffee = &a;
	pCoffee->price += 1000;
	printf("�̸�:%s ����:%d", a.name, a.price);

	RaisePrice(&a);
	printf("�̸�:%s ����:%d", a.name, a.price);
	DownPrice(&a);
	printf("�̸�:%s ����:%d ������", a.name, a.price);

	showinfor(&a);
	return 0;
}