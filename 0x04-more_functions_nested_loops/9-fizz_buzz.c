#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 1;

	while (num < 101)
	{
		if (num % 3 == 0)
		{
		printf("Fizz ");
		}
		if (num % 5 == 0)
		{
		printf("Buzz ");
		}
		if (num % 3 != 0 && num % 5 != 0)
		{
		printf("%d ", num);
		}
	num ++;
	}
	printf("\n");
	return (0);
}

