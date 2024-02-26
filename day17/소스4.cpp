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
    printf("새로운 노드 데이터 입력:");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

void appendNode(Node** head) {
    //새로운 노드 만들기
    Node* newNode;
    newNode = creatNode();
    //만약에 첫번째가 null이면 바로 연결
    if (*head == NULL) {
        *head = newNode;
    }
    //그게 아니면 마지막을 찾아서 연결 시키기
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
        printf("삭제할 노드가 없음\n");
    }
    else if (horse->next == NULL) {
        *head = NULL;
        printf("데이터 %d가 삭제되었습니다.\n", horse->data);
        free(horse);
    }
    else {
        while (horse->next->next != NULL) {
            horse = horse->next;
        }
        Node* deleteTarget = horse->next;
        printf("데이터 %d가 삭제되었습니다.\n", deleteTarget->data);
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
        printf("1.노드 추가 2.노드 보기 3.노드 마지막 삭제 4.종료:");
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
            printf("프로그램 종료 ㅅㄱ");
            break;
        default:
            printf("잘못 입력함 ㅅㄱ");
            break;
        }
    }


}