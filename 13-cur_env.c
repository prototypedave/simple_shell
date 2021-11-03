#include "main.h"
/**
 * _env - prints the current environment
 * @vars: struct of variables
 * Return: void.
 */
void _env(vars_t *vars)
{
unsigned int i;
for (i = 0; vars->env[i]; i++)
{
puts(vars->env[i]);
puts("\n");
}
vars->status = 0;
}
