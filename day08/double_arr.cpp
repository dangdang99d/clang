#include<stdio.h>
int main() {

	// ±¹ ¼ö ¿µ Å½
	int score[3][4] = {
		{70,80,80,80},
		{60,50,60,70},
		{90,90,100,90},
	};
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += score[i][3];
	}
	printf("%f", float(sum / 3));


	
	return 0;
	
	
	
}