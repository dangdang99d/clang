#include<stdio.h>
int main(){
	int n, cu;
	printf("정사각형의 한변의 길이 입력");
	scanf("%d", &n);
	printf("정사각형의 넓이는 %d, 둘레는 %d", n * n, n * 4);
	printf("\n원의의 반지름 입력");
	scanf("%d", &cu);
	printf("원의 넓이는%.3f, 둘레는 %.3f", 3.14 * cu, cu* cu * 3.14);
	return 0;

}