#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Multiplies two positive numbers.
* @argc: The number of arguments.
* @argv: An array of pointers to the arguments.
*
* Return: 0 if successful, 98 otherwise.
*/
int main(int argc, char **argv)
{
char *num1, *num2, *result;
int len1, len2, i, j, carry, digit;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];
len1 = strlen(num1);
len2 = strlen(num2);
result = calloc(len1 + len2 + 1, sizeof(char));

if (result == NULL)
return (98);

for (i = len1 - 1; i >= 0; i--)
{
if (num1[i] < '0' || num1[i] > '9')
{
printf("Error\n");
free(result);
return (98);
}

carry = 0;

for (j = len2 - 1; j >= 0; j--)
{
if (num2[j] < '0' || num2[j] > '9')
{
printf("Error\n");
free(result);
return (98);
}

digit = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1] - '0';
result[i + j + 1] = digit % 10 + '0';
carry = digit / 10;
}

result[i + j + 1] = carry + '0';
}

while (*result == '0' && *(result + 1) != '\0')
result++;

printf("%s\n", result);

return (0);
}

