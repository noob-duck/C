#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	
	printf ("%d \n", x > 0 && y > 0); //�׸��� ���� and
	printf ("%d \n", x > 0 && y < 0); //�׸��� ���� and
	
	printf ("%d \n", x > 0 || y < 0); //or �Ǵ� ���� 
	return 0;
}
