//�߰�,����,������ ����,�����ֱ�, 
#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int data;
	Node* next;
}Node;
Node* createNode() {
	Node* neww;
	neww = (Node*)malloc(sizeof(Node));
	printf("���ο� ��� ������ �Է�:");
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
		printf("���� �׸��� ����\n");
		return;
	}
	else
	{
		while (horse->next != NULL)
		{
			horse = horse->next;
			printf("������ %d.\n", horse);
		}                             
		printf("������ %d�� �����Ǿ����ϴ�.\n", horse->data);
		printf("������ %d.\n", horse);
		horse = NULL;
		printf("������ %d.\n", horse);
		free(horse);
	}
}
void show(Node**head)
{
	Node* horse;
	horse =*head;
	if (horse == NULL)
	{
		printf("����Ʈ �� ���� ����");
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
		printf("1.��� �߰� 2.������ ��� ���� 3.��� ���� 4.����:");
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
			printf("���α׷� ���� ����\n");
			return 0;
		default:
			printf("���α׷� ��ȣ �Է� ����\n");
			break;
		}
	}

}