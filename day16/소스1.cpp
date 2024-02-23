//linked_list_dynamic.cpp
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

Node* creatNode() {
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    printf("Ŀ�� �̸�:");
    scanf("%s", &newNode->data.name);
    newNode->next = NULL;
    return newNode;
}

void appendNode(Node** head) {
    //���ο� ��� �����
    Node* newNode;
    newNode = creatNode();
    //���࿡ ù��°�� null�̸� �ٷ� ����
    if (*head == NULL) {
        *head = newNode;
    }
    //�װ� �ƴϸ� �������� ã�Ƽ� ���� ��Ű��
    else {
        Node* horse = *head;
        while (horse->next != NULL) {
            horse = horse->next;

        }
        horse->next = newNode;
    }
}

void deleteLastNode(Node** head) {
    printf("%d", *head);
    Node* horse = *head;
    if (horse == NULL) {
        printf("������ ��尡 ����\n");
    }
    else if (horse->next == NULL) {
        *head = NULL;
        printf("������ %d�� �����Ǿ����ϴ�.\n", horse->data);
        free(horse);
    }
    else {
        while (horse->next->next != NULL) {
            horse = horse->next;
        }
        Node* deleteTarget = horse->next;
        printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
        horse->next = NULL;
        free(deleteTarget);
    }
}
void deleteLastNode(Node** head) {
    int num;
    char cof[20];
    printf("������ Ŀ�� �Է�:");
    scanf("%d",&num );
    scanf("%s", &cof);
    
    Node* horse = *head;
    if (horse == NULL) {
        printf("������ ��尡 ����\n");
    }
    else if (horse->next == NULL) {
        *head = NULL;
        printf("������ %d�� �����Ǿ����ϴ�.\n", horse->data);
        free(horse);
    }
    else {
        while (horse->next->next != NULL) {
            horse = horse->next;
        }
        Node* deleteTarget = horse->next;
        printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
        horse->next = NULL;
        free(deleteTarget);
    }
}

void printNodes(Node* head) {
    Node* horse;
    printf("%d", head);
    horse = head;
    while (horse->next != NULL) {
        printf("%d=>", horse->data);
        horse = horse->next;
    }
    printf("%d\n", horse->data);
}

int main() {
    Node* head = NULL;

    while (1) {
        int num;
        printf("1.��� �߰� 2.��� ���� 3.��� ������ ���� 4.����:");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            appendNode(&head);
            break;
        case 2:
            printNodes(head);
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

void deleteLastNode(Node** head) {
    int num;
    printf("������ ��ȣ �Է�:");
    scanf("%d", &num);

    Node* horse = *head;
    if (horse == NULL) {
        printf("������ ��尡 ����\n");
    }
    else if (horse->next == NULL) {
        *head = NULL;
        printf("������ %d�� �����Ǿ����ϴ�.\n", horse->data);
        free(horse);
    }
    else {
        int c = 0;
        for (int i = 1; i < num; i++) {
            horse = horse->next;
            c++;
        }
        
        horse->next = horse->next->next;
        Node* deleteTarget = horse->next;
        printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
        horse->next = NULL;
        free(deleteTarget);
        horse->next = horse->next->next;
    }
}