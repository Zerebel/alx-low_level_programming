#include "main.h"

/**
* _strncpy - copy a string
*
* @dest: destination
* @src: source
* @n: number of characters
* Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n)
	{
	if (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	else
	{
	*ptr = '\0';
	}
	i++;
	}
return (dest);
}
