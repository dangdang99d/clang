#include<stdio.h>
int main() {
	//int n;
	//int sum = 0;
	//printf("n");
	//scanf("%d", &n);

	//for (int i = 1; i <= n; i++) {
	//	sum=sum+ i;
	//}	
	//printf("%d", sum);


	//int n;
	//printf("정수 입력:");
	//scanf("%d",&n);
	//for (int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", n, i, n * i);
	//}
	//for (int i = 97; i <= 122; i++) {
	//	printf("%c", i);
	//}
	//printf("\n");
	//for (int i = 65; i < 91; i++)
	//	printf("%c", i);
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 7) {
	//		//break; //for문 탈출
	//		//continue; // for문 점프
	//	}
	//}
	/*for (int i = 65; i <=90 ; i++){
		
		if (i>=76 && i<=78 ) {
			continue;	
		}
		else
			printf("%c", i);
	}
	*/
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
		{
			printf("   %d * %d = %d", i, j, i * j);

		}
		printf("\n");
	}
	return 0;
}