#include "main.h"

/**
* _isalpha - check for alphabetic chars
*
* @num: number to check
* Return: Always 1 (Success)
*/
int _isalpha(int num)
{
	if (num >= 97 && num <= 122)
		return (1);
	if (num >= 65 && num <= 90)
		return (1);
	return (0);
}

