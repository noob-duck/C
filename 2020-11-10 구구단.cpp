#include <stdio.h>
int main(void)
{
	int i, j, n, m;
	
	
	scanf("%d", &n);
	scanf("%d", &m);
	for (i=1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d * %d = %d \n",  i, j ,i*j);
		}
		printf("\n");
	}
	return 0;
}
