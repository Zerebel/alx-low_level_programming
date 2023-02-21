#include "main.h"

/**
 * _islower - checks lowercase letter
 *
 * @num: letter to check
 * Return: Success(1) else 0
 */

int _islower(int num)
{
if (num >= 97 && num <= 122)
return (1);
return (0);
}
