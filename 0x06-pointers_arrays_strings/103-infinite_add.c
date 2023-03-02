#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @n1: A string representation of the first number.
 * @n2: A string representation of the second number.
 * @r: The buffer to store the result in.
 * @size_r: The size of the result buffer.
 *
 * Return: If the result fits in the buffer, return a pointer to @r.
 * else return 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
 int num, tens = 0;

 while (*n1 && *n2) {
  num = (*n1 - '0') + (*n2 - '0');
  num += tens;
  *(r + r_index) = (num % 10) + '0';
  tens = num / 10;
  n1--;
  n2--;
  r_index--;
 }

 while (*n1) {
  num = (*n1 - '0') + tens;
  *(r + r_index) = (num % 10) + '0';
  tens = num / 10;
  n1--;
  r_index++;
 }

 while (*n2) {
  num = (*n2 - '0') + tens;
  *(r + r_index) = (num % 10) + '0';
  tens = num / 10;
  n2--;
  r_index--;
 }
 return (0);
}
