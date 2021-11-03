#include "main.h"
/**
 * new_exit - exit program
 * @vars: variables
 * Return: void
 */
void new_exit(vars_t *vars)
{
int status;
if (_strcmpr(vars->av[0], "exit") == 0 && vars->av[1] != NULL)
{
status = _atoi(vars->av[1]);
if (status == -1)
{
vars->status = 2;
print_error(vars, ": Illegal number: ");
puts(vars->av[1]);
puts("\n");
free(vars->commands);
vars->commands = NULL;
return;
}
vars->status = status;
}
free(vars->buffer);
free(vars->av);
free(vars->commands);
free_env(vars->env);
exit(vars->status);
}
