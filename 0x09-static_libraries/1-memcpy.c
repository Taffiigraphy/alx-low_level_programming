#include "main.h"
#include <unistd.h>
/**
 * _memcpy- pointer function
 * @dest: pointer variable
 * @src: pointer variable
 * @n: int variable
 * Return: 0 for success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int d = n;


	for (; m < d; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);

}
