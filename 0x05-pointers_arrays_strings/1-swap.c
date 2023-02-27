#include "main.h"

/**
* swap_int - swaps values of two integers
*
* @a: memory of a
* @b: memory of b
* Return: Null
*/
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

