#include "main.h"

/**
* print_triangle - print triangle
*
* @size: number
	* Return: Null
*/
void print_triangle(int size)
{
	int i, j = size;
        
	while (size > 0)
	{	
	i = 0;
	while (i < j)
	{
		if (i > 1)
		{		
	_putchar(' ');
		}
		else
		{
	_putchar('#');
		}
	i++;
	}
	_putchar('\n');
	size--;
	}
}

