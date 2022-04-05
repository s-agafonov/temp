#include <stdio.h>

int main()
{
	char a, b, c;
	int number_sum;
	scanf("%c%c%c", &a, &b, &c);
	number_sum = (a - 'a') + (b - 'a') + (c - 'a'); 
	printf("%d", number_sum);
        return 0;
}         
