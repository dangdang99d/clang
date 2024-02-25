//추가,제거,마지막 제거,보여주기, 
#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	Node* next;
}Node;
Node* createNode() {
	Node* neww;
	neww = (Node*)malloc(sizeof(Node));
	printf("새로운 노드 데이터 입력:");
	scanf("%d", &neww->data);
	neww->next = NULL;
	return neww;
}
void  append(Node**head) {
	Node* horse;
	horse = *head;
	Node* uk;
	uk=createNode();
	if (*head == NULL)
		*head = uk;
	else
	{
		while (horse->next != NULL)
		{	
			horse = horse->next;
		}
		horse->next = uk;
	}	 
}
void delet(Node** head)
{
	Node* horse = *head;
	if (horse == NULL)
	{
		printf("없앨 항목이 없음\n");
		return;
	}
	else
	{
		while (horse->next != NULL)
		{
			horse = horse->next;
			printf("데이터 %d.\n", horse);
		}                             
		printf("데이터 %d가 삭제되었습니다.\n", horse->data);
		printf("데이터 %d.\n", horse);
		horse = NULL;
		printf("데이터 %d.\n", horse);
		free(horse);
	}
}
void show(Node**head)
{
	Node* horse;
	horse =*head;
	if (horse == NULL)
	{
		printf("프린트 할 것이 없음");
	}
	else 
	{
		while (horse->next != NULL)
		{
			printf("%d\n", horse->data);
			horse = horse->next;
		}
		printf("%d\n", horse->data);
	
	}
}




int main()
{
	Node* node = NULL;
	while (1)
	{	
		int num;
		printf("1.노드 추가 2.마지막 노드 삭제 3.노드 보기 4.종료:");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			append(&node);
			break;
		case 2:
			delet(&node);
			break;
		case 3:
			show(&node);
			break;
		case 4:
			printf("프로그램 종료 ㅅㄱ\n");
			return 0;
		default:
			printf("프로그램 번호 입력 오류\n");
			break;
		}
	}

}