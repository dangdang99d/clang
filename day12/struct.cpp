#include<stdio.h>
//struct[������ ������ Ÿ��(����ü)]
typedef int Length;

typedef struct Coffee {// �� �Լ��� ���� ���ϸ� ����
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
	//Coffee americano = {"americano",5,2500}; //structcoffee�� ������ Ÿ���̰� americano�� ����
	//printf("�ش� Ŀ���� �̸��� %s Į�θ��� %1f ������ %d�Դϴ�.\n", americano.name, americano.calories, americano.price);

	//Chobap me = { "�����ʹ�","����",25}; //structcoffee�� ������ Ÿ���̰� americano�� ����
	//printf("�̸��� %s �������� %s Į�θ��� %lf�Դϴ�.\n", me.name, me.fish, me.cal);

	Coffee menu[3];
	for (int i = 0; i < 3; i++) {
		printf("�޴� �Է�");
		scanf("%s", &menu[i].name);
		printf("Į�θ� �Է�");
		scanf("%lf", &menu[i].calories);
		printf("���� �Է�");
		scanf("%d", &menu[i].price);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s  %lf  %d\n", menu[i].name, menu[i].calories, menu[i].price);
	}

	return 0;
}
