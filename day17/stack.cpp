#include<stdio.h>
#include<stdlib.h>
//�迭 ������� �� ����
typedef struct Stack {
	int top;
	int data[100];

}Stack;
void stackInit(Stack*stack)
{
	stack->top =- 1;
}
void push(Stack* stack)
{
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	//num�� stack data�� ���� ���ڸ� �ø���
	stack->data[++stack->top] = num;
}
void printStack(Stack*stack) {
	for (int i = 0; i <= stack->top; i++)
	{
		printf("%d ", stack->data[i]);
	}
		

}
int isEmtpy(Stack* stack)
{
	if (stack->top == -1)
	{
		printf("��� �ֽ��ϴ�.");
		return 1;
	}
	else
	{
		printf("���� ž�� ��ġ��%d", stack->top + 1);
		return 0;
	}
}
void pop(Stack*stack) {
	if (!isEmtpy(stack)) 
		{
			while (stack->top != -1) {
				stack->data[stack->top--] = 0;
			}
		}
	}
	
int main()
{
	printf("���� ���α׷�\n");
	int bb;
	Stack a;
	stackInit(&a);
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
			case4:
				return 0;
				break;
		}
		
		
		bb = isEmtpy(&a);
		printf("\n%d", bb);
	}
}