#include<stdio.h>
void ss(int* k)
{
	int* i = k;
	printf("\n%d", i);
	*i = 7;
}

int main() {
	int a = 1;
	int* pa = &a;
	int** paa = &pa;
	printf("%d %d %d\n", paa, *paa, **paa);
	printf("%d %d  &pa=%d", pa, *pa,&pa);
	printf("\n");
	int* uu = *paa;
	int* kk;
	kk = pa;
	printf("%d %d %d\n", kk, *kk, &kk);
	printf("%d %d %d\n", uu, *uu, &uu);
	ss(pa);
	printf("\n%d", *pa);

}

////linked_list_dynamic.cpp
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//    int data;
//    struct Node* next;
//}Node;

//Node* creatNode() {
//    Node* newNode;
//    newNode = (Node*)malloc(sizeof(Node));
//    printf("���ο� ��� ������ �Է�:");
//    scanf("%d", &newNode->data);
//    newNode->next = NULL;
//    return newNode;
//}

//void appendNode(Node** head) {
//    //���ο� ��� �����
//    Node* newNode;
//    newNode = creatNode();
//    //���࿡ ù��°�� null�̸� �ٷ� ����
//    if (*head == NULL) {
//        *head = newNode;
//    }
//    //�װ� �ƴϸ� �������� ã�Ƽ� ���� ��Ű��
//    else {
//        Node* horse = *head;
//        while (horse->next != NULL) {
//            horse = horse->next;
//        }
//        horse->next = newNode;
//    }
//}
//
//void deleteLastNode(Node** head) {
//    Node* horse = *head;
//    if (horse == NULL) {
//        printf("������ ��尡 ����\n");
//    }
//    else if (horse->next == NULL) {
//        *head = NULL;
//        printf("������ %d�� �����Ǿ����ϴ�.\n", horse->data);
//        free(horse);
//    }
//    else {
//        while (horse->next->next != NULL) {
//            horse = horse->next;
//        }
//        Node* deleteTarget = horse->next;
//        printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
//        horse->next = NULL;
//        free(deleteTarget);
//    }
//}
//
//void printNodes(Node* head) {
//    Node* horse;
//    horse = head;
//    while (horse->next != NULL) {
//        printf("%d=>", horse->data);
//        horse = horse->next;
//    }
//    printf("%d\n", horse->data);
//}
//
//int main() {
//    Node* head = NULL;
//
//    while (1) {
//        int num;
//        printf("1.��� �߰� 2.��� ���� 3.��� ������ ���� 4.����:");
//        scanf("%d", &num);
//        switch (num)
//        {
//        case 1:
//            appendNode(&head);
//            break;
//        case 2:
//            printNodes(head);
//            break;
//        case 3:
//            deleteLastNode(&head);
//            break;
//        case 4:
//            printf("���α׷� ���� ����");
//            break;
//        default:
//            printf("�߸� �Է��� ����");
//            break;
//        }
//    }
//
//
//}