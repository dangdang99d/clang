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
	printf("강의명 :%s  강사이름: %s \n 학생수: %d  시간: %d", student->name, student->teacher, student->num, student->time);
}
int main() {
	Course info;
	printf("강의명 입력:");
	scanf("%s", &info.name);
	printf("\n강사이름 입력:");
	scanf("%s", &info.teacher);
	printf("\n 수강생수 입력:");
	scanf("%d", &info.num);
	printf("\n강의 시간 입력:");
	scanf("%d", &info.time);
	Raise(&info);
	Info(&info);
}