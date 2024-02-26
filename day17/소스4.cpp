//linked_list_dynamic.cpp
#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* creatNode() {
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    printf("���ο� ��� ������ �Է�:");
    scanf("%d", &newNode->data);
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
    printf("%d", head);
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