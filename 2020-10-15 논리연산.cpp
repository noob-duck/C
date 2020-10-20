#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	
	printf ("%d \n", x > 0 && y > 0); //그리고 논리곱 and
	printf ("%d \n", x > 0 && y < 0); //그리고 논리곱 and
	
	printf ("%d \n", x > 0 || y < 0); //or 또는 논리합 
	return 0;
}
