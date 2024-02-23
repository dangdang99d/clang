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
    printf("추가할 커피를 입력하세요");
    scanf("%s", &nnew->data.name);
    printf("추가할 커피 가격");
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
        printf("추가할 커피를 입력하세요:");
        scanf("%s", &);
        horse->next=creatNode();
        horse = horse->next;
    }
}


int main() {
    Node* head = NULL;

    while (1) {
        int num;
        printf("1.추가 커피  2.커피 보기 3.커피 마지막 삭제 4.종료:");
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
            printf("프로그램 종료 ㅅㄱ");
            break;
        default:
            printf("잘못 입력함 ㅅㄱ");
            break;
        }
    }


}