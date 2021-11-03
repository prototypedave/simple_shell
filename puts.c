#include "main.h"
/**
 * _puts2 - prints a string to standard error
 * @str: string to print
 *
 * Return: void
 */
void _puts2(char *str)
{
        ssize_t num, len;

        num = _strlen(str);
        len = write(STDERR_FILENO, str, num);
        if (len != num)
        {
                perror("Fatal Error");
                exit(1);
        }

}
