#include <stdio.h>

int main(void)
{
	int first;
	int second;
	printf("ù��° ���� �Է��ϼ��� \n");
	scanf("%d", &first);
	printf("�ι�° ���� �Է��ϼ��� \n");
	scanf("%d", &second);
	printf("%d�� %d�� ���� %d �Դϴ�. \n", first, second, first+second);
	printf("%d�� %d�� ���� %d �Դϴ�. \n", first, second, first-second);
	printf("%d�� %d�� ���� %d �Դϴ�. \n", first, second, first*second);
	printf("%d�� %d�� ���� %d �Դϴ�. \n", first, second, first/second);
	printf("%d�� %d�� �������� %d �Դϴ�. \n", first, second, first%second);
	printf("%d�� %d�� ��2�� %.12398lf �Դϴ�. \n", first, second, (double)first/second);
	
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first>second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first<second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first<=second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first>=second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first==second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first!=second);
	return 0;
}
