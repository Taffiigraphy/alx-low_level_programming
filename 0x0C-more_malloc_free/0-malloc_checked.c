#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *hldr;

	hldr = malloc(b);

	if (hldr == NULL)
		exit(98);

	return (hldr);
}
