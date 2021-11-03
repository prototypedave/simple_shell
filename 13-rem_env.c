#include "main.h"
/**
 * new_unsetenv - remove an environment variable
 * @vars: pointer to a struct of variables
 *
 * Return: void
 */
void new_unsetenv(vars_t *vars)
{
char **key, **newenv;
unsigned int i, j;
if (vars->av[1] == NULL)
{
print_error(vars, ": Incorrect number of arguments\n");
vars->status = 2;
return;
}
key = find_key(vars->env, vars->av[1]);
if (key == NULL)
{
print_error(vars, ": No variable to unset");
return;
}
for (i = 0; vars->env[i] != NULL; i++)
;
newenv = malloc(sizeof(char *) * i);
if (newenv == NULL)
{
print_error(vars, NULL);
vars->status = 127;
new_exit(vars);
}
for (i = 0; vars->env[i] != *key; i++)
newenv[i] = vars->env[i];
for (j = i + 1; vars->env[j] != NULL; j++, i++)
newenv[i] = vars->env[j];
newenv[i] = NULL;
free(*key);
free(vars->env);
vars->env = newenv;
vars->status = 0;
}
