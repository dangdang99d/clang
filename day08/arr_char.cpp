#include<stdio.h>
int main() {

	// ���� char a ='a';
	// ���ڿ� char coffee[]�� ���� ������ null���� ('\n')�� ��������
	char coffee[5] = { '1','a','t','t','a' };
	char coffee2[5] = { '1','a','t','t','a' };
	char coffee1[] = { 'a','m','e','r','i','c','a','n','o' };	
	
	for (int i = 0; i < sizeof coffee1; i++) {
		printf("%c", coffee1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", coffee[i]);
	}
	printf("\n");
	printf("%s\n", coffee);
	printf("%s\n", coffee2);
	printf("%s", coffee1);






}