#include<stdio.h>
#include<stdlib.h>
int main() {
	int* arr;
	int num;
	printf("���ϴ� �迭�� ���� �Է� ��");
	scanf("%d");
	arr = (int*)malloc(num * sizeof(int));// sizeof(int) =4 �̴�.
	for (int i = 0; i < num; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < num, i++) {
		printf("arr�� %d��: %d\n", i, arr[i]);
	}
		return 0;
	free(arr);
	
}