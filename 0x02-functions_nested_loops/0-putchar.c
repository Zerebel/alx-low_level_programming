#include "main.h"

/**
* main - print _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 0;
	char word[] = "_putchar";

	while (num < 8)
	{
	_putchar(word[num]);
	num++;
	}
	_putchar('\n');
	return (0);
}

