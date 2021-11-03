#include "main.h"
/**
 * _strtok - breaks string str into a series of tokens
 * @str: string to tokenize
 * @delim: delimiter to tokenize against
 *
 * Return: pointer to the next token or NULL
 */
char *new_strtok(char *str, const char *delim)
{
        static char *token_start;
        static char *next_token;
        unsigned int i;

        if (str != NULL)
                next_token = str;
        token_start = next_token;
        if (token_start == NULL)
                return (NULL);
        for (i = 0; next_token[i] != '\0'; i++)
        {
                if (check_match(next_token[i], delim) == 0)
                        break;
        }
        if (next_token[i] == '\0' || next_token[i] == '#')
        {
                next_token = NULL;
                return (NULL);
        }
        token_start = next_token + i;
        next_token = token_start;
        for (i = 0; next_token[i] != '\0'; i++)
        {
                if (check_match(next_token[i], delim) == 1)
                        break;
        }
        if (next_token[i] == '\0')
                next_token = NULL;
        else
        {
                next_token[i] = '\0';
                next_token = next_token + i + 1;
                if (*next_token == '\0')
                        next_token = NULL;
        }
        return (token_start);
}
