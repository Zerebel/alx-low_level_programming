#include "main.h"

/**
* _strlen - checks length of a string
*
* @s: address of s
* Return: Null
*/
int _strlen(char *s)
{
int len = 0, index = 0;
while (s[index] != '\0')
{
len++;
index++;
}
return (len);
}
