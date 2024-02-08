#include<stdio.h>
int main() {
	/*for (int i = 1; i <= 9; i++)
	{
		for (int y = 1; y <= 9; y++)
		{
			printf("%d * %d = %d  ", y, i, i * y);
		}
		printf("\n");
	}*/
	/*int y;
	printf("사용자 정수를 입력하세요:");
	scanf("%d", &y);
	for (int i = 1; i <= 100; i++)
	{
		if (i % y == 0)
		{
			printf("%d  ", i);
		}
	}*/

	int num;
	printf("사용자 이상의 정수를 입력하세요:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		int y;
		for (y = 1; y <= num-i+1; y++)
			printf("*");
		for (y = 1; y <i; y++)
			printf(" ");
		int z;
		for (z = 1; z < i; z++)
			printf(" ");
		for (z = 1; z <= num - i+1; z++)
			printf("*");
		if (i == num)
			break;
		printf("\n");
		
	}
	for (int i = 1; i <= num; i++)
	{
		int y;
		for (y = 1; y < i; y++)
			printf("*");
		for (y = 1; y <= num - i + 1; y++)
			printf(" ");
		
		int z;
		for (z = 1; z <= num - i + 1; z++)
			printf(" ");
		for (z = 1; z < i; z++)
			printf("*");
		
		printf("\n");
	}

}