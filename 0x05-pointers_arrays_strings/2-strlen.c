<<<<<<< HEAD
#include "main.h"

/**
* _strlen - check string lenght
*
* @s: string var
* Return: lenght of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		if (*s != ' ')
		{
		len++;
		}
	s++;
	}
return (len - 1);
}

=======
#include "main.h"

/**
* _strlen - check string lenght
*
* @s: string var
* Return: lenght of string
*/
int _strlen(char *s)
{
	int len = 0;
	while(*s != '\n')
	{
		if(*s != ' ')
		{
		len++;
		}
	s++;
	}
        return (len - 1);
}

>>>>>>> dab980aecda41af0c2068cc26bc5b4561e8fcc1b
