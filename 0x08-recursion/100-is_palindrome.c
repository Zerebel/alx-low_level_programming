#include "main.h"
#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: (1) if s is a palindrome, (0) otherwise
 */
int is_palindrome(char *s)
{
int length = 0, i = 0;

while (s[length] != '\0')
length++;

while (i < length / 2)
if (s[i] != s[length - i - 1])
return (0);
else
i++;
return (1);
}
