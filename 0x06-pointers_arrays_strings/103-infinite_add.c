#include "main.h"
/**
 * infinite_add - Adds two numbers stored as strings.
 *
 * @num1: First number.
 * @num2: Second number.
 * @result: Buffer to store the result.
 * @result_size: Size of the buffer.
 *
 * Return: If buffer size is too small return 0, else return the sum
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
int length_num1 = 0, length_num2 = 0, operation, carry = 0;
int big, digit_num1, digit_num2;
/* Get length of num1 and num2 */
while (*(num1 + length_num1))
length_num1++;
while (*(num2 + length_num2))
length_num2++;
/* Determine which number is bigger */
big = (length_num1 >= length_num2) ? length_num1 : length_num2;
/* If buffer size is too small return 0 */
if (result_size <= big + 1)
return (0);
result[big + 1] = '\0';
length_num1--, length_num2--, result_size--;
digit_num1 = *(num1 + length_num1) -'0';
digit_num2 = *(num2 + length_num2) -'0';
while (big >= 0)
{
operation = digit_num1 + digit_num2 + carry;
carry = (operation >= 10) ? operation / 10 : 0;
*(result + big) = (operation > 0) ? ((operation % 10) + '0') : '0';
digit_num1 = (length_num1 > 0) ? *(--num1 + length_num1 - 1) - '0' : 0;
digit_num2 = (length_num2 > 0) ? *(--num2 + length_num2 - 1) - '0' : 0;
big--, result_size--;
}
/* Remove leading zeros */
while (*result == '0' && *(result + 1) != '\0')
result++;
return (result);
}

