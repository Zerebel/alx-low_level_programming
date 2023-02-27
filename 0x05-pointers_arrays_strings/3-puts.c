#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: pointer to chars variable
 * Return - None;
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
