#include "main.h"
/**
 * find_key - finds an environment variable
 * @env: array of environment variables
 * @key: environment variable to find
 *
 * Return: pointer to address of the environment variable
 */
char **find_key(char **env, char *key)
{
unsigned int i, j, len;
len = _strlen(key);
for (i = 0; env[i] != NULL; i++)
{
for (j = 0; j < len; j++)
if (key[j] != env[i][j])
break;
if (j == len && env[i][j] == '=')
return (&env[i]);
}
return (NULL);
}
