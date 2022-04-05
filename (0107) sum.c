#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int digit_sum = a % 10 + a / 100 + (a % 100) / 10; 
	printf("%d", digit_sum);
        return 0;
}         
