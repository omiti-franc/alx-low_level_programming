#include "main.h"

/**
* _memcpy - Copies bytes from memory area
*
* @n: number of bytes
* @src: Source
* @dest: Destination
* Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];

	}

	return (dest);
}
