#include<stdio.h>
int main() {
	int a;
	int* pa;
	pa = &a;
	*pa = 10;
	printf("%d\n", a);

	int b;
	int* kk;
	int** kkk;
	kk = &b;
	kkk = &kk;
	**kkk = 20;
	printf("%d\n", b);


	int arr[5];
	int* pa_arr;
	pa_arr = &arr[0];
	for (int i = 0; i < 5; i++) {
		*(pa_arr + i) = i * 5;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}


	int two[3][4];
	int* pa_two;
	pa_two = &two[0][0];
	for (int i = 0; i < 12; i++) {
		*(pa_two + i) = i + 1;
	}

	char twoarr[4][20] = {
		"아메리카노",
		"라떼",
		"바닐라",
		"없음"
	};
	char(*pa_twoarr)[20];
	pa_twoarr = &twoarr[0];
	for (int i = 0; i < 4; i++) {
		printf("%s\n", pa_twoarr[i]);
	}


}