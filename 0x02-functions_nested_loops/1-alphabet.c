#include <stdio.h>

/*Function Declaration*/
void print_alphabet(void);

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - second function
 *
 * Return : 0
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
