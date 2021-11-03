#include "main.h"
/**
 * _strlen- returns the length of a string
 * @str: parameter of string
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
unsigned int i;
i = 0;
for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * _puts- outputs a string
 * @str: string to write
 *
 * Return: number of chars printed or -1 on failure
 */
ssize_t _puts(char *str)
{
ssize_t num, len;
num = _strlen(str);
len = write(STDOUT_FILENO, str, num);
if (len != num)
{
perror("Fatal Error");
return (-1);
}
return (len);
}

/**
 * _strcmpr- compares the length of two strings
 * @str1: first string to be compared in length
 * @str2: second string to be compared
 * Return: 0 on success, anything else is a failure
 */
int _strcmpr(char *str1, char *str2)
{
int i;
i = 0;
while (str1[i] == str2[i])
{
if (str1[i] == '\0')
return (0);
i++;
}
return (str1[i] - str2[i]);
}

/**
 * _strdup- used to duplicate a string
 * @strtodup: string to be duplicated
 * Return: a pointer to the new duplicated string
 */
char *_strdup(char *strtodup)
{
char *copy;
int len, i;
if (strtodup == 0)
return (NULL);
for (len = 0; strtodup[len]; len++)
;
copy = malloc((len + 1) * sizeof(char));
for (i = 0; i <= len; i++)
copy[i] = strtodup[i];
return (copy);
}

/**
 * _strcat- concatenates two strings
 * @strc1: first string
 * @strc2: second string
 * Return: pointer
 */
char *_strcat(char *strc1, char *strc2)
{
char *newstring;
unsigned int len1, len2, newlen, i, j;
len1 = 0;
len2 = 0;
if (strc1 == NULL)
len1 = 0;
else
{
for (len1 = 0; strc1[len1]; len1++)
;
}
if (strc2 == NULL)
len2 = 0;
else
{
for (len2 = 0; strc2[len2]; len2++)
;
}
newlen = len1 + len2 + 2;
newstring = malloc(sizeof(char) * newlen);
if (newstring == NULL)
return (NULL);
for (i = 0; i < len1; i++)
newstring[i] = strc1[i];
newstring[i] = '/';
for (j = 0; j < len2; j++)
newstring[i + 1 + j] = strc2[j];
newstring[len1 + len2 + 1] = '\0';
return (newstring);
}


