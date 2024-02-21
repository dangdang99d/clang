#include<stdio.h>
#include<stdlib.h>
int main() {
	int* arr;
	int num;
	printf("원하는 배열의 갯수 입력 ㄱ");
	scanf("%d");
	arr = (int*)malloc(num * sizeof(int));// sizeof(int) =4 이다.
	for (int i = 0; i < num; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < num, i++) {
		printf("arr의 %d번: %d\n", i, arr[i]);
	}
		return 0;
	free(arr);
	
}