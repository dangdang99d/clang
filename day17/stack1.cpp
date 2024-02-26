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
	printf("���� �Է�:");
	scanf("%d", &num);
	//num�� stack data�� ���� ���ڸ� �ø���
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
		printf("1.���� ä��� 2. ���� ���� 3. ��ü ���� 4.����\n");
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
			printf("���ڸ� �߸��Է��Ͽ����ϴ�.");
			break;
		}
	}

}