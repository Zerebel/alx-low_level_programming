#include "main.h"
/**
 * print_alphabet - print the alphabet
 * in lowercase
 *
 * Return : Null
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar (letter);
letter++;
}
_putchar ('\n');
}
