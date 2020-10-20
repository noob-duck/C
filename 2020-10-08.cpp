#include <stdio.h>

int main(void)
{
	int first;
	int second;
	printf("첫번째 값을 입력하세요 \n");
	scanf("%d", &first);
	printf("두번째 값을 입력하세요 \n");
	scanf("%d", &second);
	printf("%d와 %d의 합은 %d 입니다. \n", first, second, first+second);
	printf("%d와 %d의 차는 %d 입니다. \n", first, second, first-second);
	printf("%d와 %d의 곱은 %d 입니다. \n", first, second, first*second);
	printf("%d와 %d의 몫은 %d 입니다. \n", first, second, first/second);
	printf("%d와 %d의 나머지는 %d 입니다. \n", first, second, first%second);
	printf("%d와 %d의 몫2는 %.12398lf 입니다. \n", first, second, (double)first/second);
	
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first>second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first<second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first<=second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first>=second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first==second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first!=second);
	return 0;
}
