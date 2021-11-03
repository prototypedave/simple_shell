#include "main.h"

/**
 * _realloc- reallocates a block of memory allocated using malloc
 * @ptr: pointer to the old memory
 * @size: pointer to number of elements in the old memory
 *
 * Return: pointer to the new memory
 */
char **_realloc(char **ptr, size_t *size)
{
	char **new;
	size_t i;

	new = malloc(sizeof(char *) * ((*size) + 10));
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (*size); i++)
	{
		new[i] = ptr[i];
	}
	*size += 10;
	free(ptr);
	return (new);
}
