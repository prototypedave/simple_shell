#include "main.h"
/**
 * check_match - checks if a character matches any in a string
 * @c: parameter of character to check
 * @str: parameter of string to check
 *
 * Return: 1 if match, 0 if not
 */
unsigned int check_match(char c, const char *str)
{
unsigned int i;

for (i = 0; str[i] != '\0'; i++)
{
if (c == str[i])
return (1);
}
return (0);
}
