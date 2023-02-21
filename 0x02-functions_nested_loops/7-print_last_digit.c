#include "main.h"

/**
* print_last_digit - checks
*
* @n: number to print last digit
* Return: Null
*/
int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
	{
	_putchar(n + '0');
	return (n);
	}

n = -n;
_putchar(n + '0');
return (n);
}

