#include<stdio.h>
typedef struct Course {
	char name[20];
	char teacher[20];
	int num;
	int time;
}Course;
void Raise(Course *student) {
	student->num += 1;
}
void Info(Course* student) {
	printf("���Ǹ� :%s  �����̸�: %s \n �л���: %d  �ð�: %d", student->name, student->teacher, student->num, student->time);
}
int main() {
	Course info;
	printf("���Ǹ� �Է�:");
	scanf("%s", &info.name);
	printf("\n�����̸� �Է�:");
	scanf("%s", &info.teacher);
	printf("\n �������� �Է�:");
	scanf("%d", &info.num);
	printf("\n���� �ð� �Է�:");
	scanf("%d", &info.time);
	Raise(&info);
	Info(&info);
}