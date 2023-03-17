#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* validate_input - Validates that the input is composed only of digits
*
* @num1: First number
* @num2: Second number
*
* Return: void
*/
void validate_input(char *num1, char *num2)
{
int i = 0;

while (num1[i] != '\0')
{
if (!isdigit(num1[i]))
{
printf("Error\n");
exit(98);
}
i++;
}

i = 0;
while (num2[i] != '\0')
{
if (!isdigit(num2[i]))
{
printf("Error\n");
exit(98);
}
i++;
}
}

/**
* multiply - Multiplies two numbers and prints the result
*
* @num1: First number
* @num2: Second number
*
* Return: 0 on success, 1 on error
*/
int multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i = 0, j = 0;
int *result;
int carry = 0, temp, x, y;
int res_size = 0, res_index = 0;

while (num1[len1] != '\0')
len1++;
while (num2[len2] != '\0')
len2++;
res_size = len1 + len2;
result = calloc(res_size, sizeof(int));
for (i = len1 - 1; i >= 0; i--)
{
x = num1[i] - '0';
carry = 0;
res_index = len1 - i - 1;
for (j = len2 - 1; j >= 0; j--)
{
y = num2[j] - '0';
temp = (carry + result[res_index]);
temp += x *y;
res_size--;
carry = temp / 10;
result[res_index] = temp % 10;
res_index++;
}
if (carry > 0)
result[res_index] += carry;
}
while (res_size > 0 && result[res_size - 1] == 0)
if (res_size == 0)
printf("0\n");
else
{
for (i = res_size - 1; i >= 0; i--)
printf("%d", result[i]);
printf("\n");
}
free(result);
return (0);
}

/**
* main - Entry point
*
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
validate_input(argv[1], argv[2]);
multiply(argv[1], argv[2]);
return (0);
}

