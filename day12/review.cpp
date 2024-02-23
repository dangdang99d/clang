#include<stdio.h>
void swapNumber(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swapChar(char *a, char *b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 5, b = 10;
	swapNumber(&a, &b);
	printf("%d  %d", a, b);

	char k = 'a', u = 'c';
	swapChar(&k, &u);
	printf("\n%c  ", k);
	printf("%c", u);
}