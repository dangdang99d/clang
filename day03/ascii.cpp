#include<stdio.h>
int main() {

	/*char alpha = 'a';
	printf("alpha: %c\n", alpha);
	printf("alpha: %d\n", alpha);*/
	char alpha;
	int alpha1;
	//int big = 65;
	//int small = 97;

	//printf("�ҹ��ڸ� �Է��ϼ���: ");
	//scanf("%c", &alpha);
	//printf("%c -> %d", alpha, int(alpha) - small);
	//printf("\n 0~25�Է�:");
	//scanf("%d", &alpha1);
	
	/*printf("%d -> %c", alpha1, int(big +alpha1));*/
	printf("�ҹ��� �Է��Ͻÿ�");
	scanf("%c", &alpha);
	printf("%c -> %c", alpha, int(alpha) -32);
	getchar();  
	printf("�빮�� �Է��Ͻÿ�");
	scanf("%c", &alpha);
	printf("%c -> %c", alpha, int(alpha) + 32);

	return 0;
}