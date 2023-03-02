/**
 * rot13 - Encodes a string using ROT13 encryption
 * @str: String to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
int i = 0;
char *p = str;

while (*p != '\0')
{
if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
*p += 13;
else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
*p -= 13;

p++;
i++;
}
return (str);
}
