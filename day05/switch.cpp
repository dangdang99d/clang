#include<stdio.h>
int main() {
	/*int num;
	printf("���� �Է�:");
	scanf("%d", &num);

	swithc(num) {
		case 1:
			printf("�Ƹ޸�ī�� �ֹ�\n");
			break;
		case 2:
			printf("�� �ֹ�\n");
			break;
		case 3:
			printf("�ٴҶ� �ֹ�\n");
			break;
		default :
			printf("�ֹ� ����\n");
		break;
	}*/
	int mon;
	printf("1~12�� �Է�:");
	scanf("%d", &mon);
	int a = mon / 4;
	swithc(a) {
		case 1:
			printf("��\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("����\n");
			break;
		default:
			printf("�ܿ�\n");
			break;
		
	return 0;
}