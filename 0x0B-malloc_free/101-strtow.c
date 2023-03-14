#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
char **words, *word;
int i = 0, j = 0, k = 0, len = 0, wordcount = 0;

if (str == NULL || *str == '\0')
return (NULL);
len = strlen(str);
words = malloc((len + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (str[i] != '\0')
{
if (str[i] != ' ')
{
j = i;
while (str[j] != ' ' && str[j] != '\0')
j++;
len = j - i + 1;
word = malloc(sizeof(char) * len);
if (word == NULL)
{
while (--wordcount >= 0)
free(words[wordcount]);
free(words);
return (NULL);
}
k = 0;
while (i < j)
{
word[k] = str[i];
i++;
k++;
}
word[k] = '\0';
words[wordcount] = word;
wordcount++;
}
else
i++;
}
words[wordcount] = NULL;
return (words);
}
