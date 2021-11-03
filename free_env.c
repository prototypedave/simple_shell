#include "main.h"
/**
 * free_env - free the shell's environment
 * @env: shell's environment
 *
 * Return: void
 */
void free_env(char **env)
{
        unsigned int i;

        for (i = 0; env[i] != NULL; i++)
                free(env[i]);
        free(env);
}
