#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

int main(){
    Node* newNode;
    
    newNode = (Node*)malloc(sizeof(Node));
    Node* uu = newNode;
    printf("���ο� ��� ������ �Է�:");
    scanf("%d", &newNode->data);
    newNode->next = (Node*)malloc(sizeof(Node));
    uu = uu->next;
    printf("���ο� ��� ������ �Է�:");
    scanf("%d", &uu->data);
    printf("---------------");
    printf("\n%d", newNode->next);
    printf("\n%d", uu);
    uu = NULL;
    printf("\n%d", newNode);
    printf("\n%d", newNode->data);
    printf("\n%d", newNode->next);
    Node* kk = newNode;
    kk->next = NULL;
    printf("\n%d", newNode->next);


   
}