#include<stdio.h>
#include<stdlib.h>
typedef struct Coffee {
    char name[20];
    int price;
}Coffee;


typedef struct Node {
	Coffee data;
	struct Node* next;
}Node;


Node* creatCoffee() {
    Node* nnew;
    nnew = (Node*)malloc(sizeof(Node));
    printf("�߰��� Ŀ�Ǹ� �Է��ϼ���");
    scanf("%s", &nnew->data.name);
    printf("�߰��� Ŀ�� ����");
    scanf("%d", &nnew->data.price);
    nnew->next = NULL;
    return nnew;
}

void appendCoffee(Node** head) {
    Node* horse;
    horse = creatCoffee();
    if (*head == NULL) {
        *head = horse;
    }
    while(horse !=NULL)
    while (horse != NULL) {
        printf("�߰��� Ŀ�Ǹ� �Է��ϼ���:");
        scanf("%s", &);
        horse->next=creatNode();
        horse = horse->next;
    }
}


int main() {
    Node* head = NULL;

    while (1) {
        int num;
        printf("1.�߰� Ŀ��  2.Ŀ�� ���� 3.Ŀ�� ������ ���� 4.����:");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            appendCoffee(&head);
            break;
        case 2:
            printNodes(&head);
            break;
        case 3:
            deleteLastNode(&head);
            break;
        case 4:
            printf("���α׷� ���� ����");
            break;
        default:
            printf("�߸� �Է��� ����");
            break;
        }
    }


}