#include<stdio.h>
int main() {
	/*int num;
	int a = 0;
	int sum = 0;
	scanf("%d", &num);
	while (1)
	{
		if (a <= num) {
			sum += a;
			a++;
		}
		else
			break;
	}
	printf("\n%d", sum);
	return 0;*/
	//int num;
	//printf("�Է� �ϼ���:");
	//scanf("%d", &num);
	//for (int i = 1; i <= num; i++)
	//{
	//	
	//	if (num % i==0 )
	//		printf("%d", i);
	//}
	int a=-1;	
	int sum=0;
	printf("���� ������ �Է� �ϼ���:");
	while (a !=0)
	{
		printf("������ �Է� �ϼ���:");
		scanf("%d", &a);
		if (a == 0)
			break;
		sum += a;

	}
	printf("%d\n", sum);

	int sol = 30;
	while (1)
	{
		printf("������ �Է� �ϼ���:");
		int a;
		scanf("%d", &a);
		if (a > 30)
		{
			printf("down");
		}
		else if (a < 30)
		{
			printf("up");
		}
		else
			break;

	}
	
	
	
}