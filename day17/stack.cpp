#include<stdio.h>
#include<stdlib.h>
//배열 기반으로 한 스택
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
	printf("숫자 입력:");
	scanf("%d", &num);
	//num을 stack data의 먼저 숫자를 올리고
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
		printf("비어 있습니다.");
		return 1;
	}
	else
	{
		printf("현재 탑의 위치는%d", stack->top + 1);
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
	printf("스택 프로그램\n");
	int bb;
	Stack a;
	stackInit(&a);
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
			case4:
				return 0;
				break;
		}
		
		
		bb = isEmtpy(&a);
		printf("\n%d", bb);
	}
}