#include <stdio.h>
/*Function declaration*/
void print_alphabet_x10(void);

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - function
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';

while (i < 10)
{
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
letter = 'a';
i++;
}
}

