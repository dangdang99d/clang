#include<stdio.h>
int main() {
	/*int num;
	printf("숫자 입력:");
	scanf("%d", &num);

	swithc(num) {
		case 1:
			printf("아메리카노 주문\n");
			break;
		case 2:
			printf("라떼 주문\n");
			break;
		case 3:
			printf("바닐라 주문\n");
			break;
		default :
			printf("주문 없음\n");
		break;
	}*/
	int mon;
	printf("1~12월 입력:");
	scanf("%d", &mon);
	int a = mon / 4;
	swithc(a) {
		case 1:
			printf("봄\n");
			break;
		case 2:
			printf("여름\n");
			break;
		case 3:
			printf("가을\n");
			break;
		default:
			printf("겨울\n");
			break;
		
	return 0;
}