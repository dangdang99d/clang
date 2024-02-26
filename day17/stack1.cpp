#include<stdio.h>
typedef struct Stack {
	int data[100];
	int top;
}Stack;
void init(Stack* stack) {
	stack->top = -1;
}
int isEmtpy(Stack*stack)
{
	if(stack->top==-1)
		return 1;
	else 
		return 0;
}
void pop(Stack* stack) {
	if (!isEmtpy(stack))
	{
		while (stack->top != -1) {
			stack->data[stack->top--] = 0;
		}
	}
}
void push(Stack* stack)
{
	int num;
	printf("숫자 입력:");
	scanf("%d", &num);
	//num을 stack data의 먼저 숫자를 올리고
	stack->data[++stack->top] = num;
}
void printStack(Stack* stack) {
	for (int i = 0; i <= stack->top; i++)
	{
		printf("%d ", stack->data[i]);
	}

}


int main() {
	Stack a;
	init(&a);
	while (1) {
		printf("1.스택 채우기 2. 스택 비우기 3. 전체 보기 4.종료\n");
		int num;
		scanf("%d", &num);
		switch (num) {
		case 1:
			push(&a);
			break;
		case 2:
			pop(&a);
			break;
		case 3:
			printStack(&a);
			break;
		case 4:
			return 0;
			break;
		default:
			printf("숫자를 잘못입력하였습니다.");
			break;
		}
	}

}