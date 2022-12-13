#include "main.h"
#include <stddef.h>

/**
* _strchr - Locate a character in a string
* @c: Character to search
* @s: String
* Return: Pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{

	int i = 0;


	while (*(s + i) != '\0')

	{
		if (*(s + i) == c)

		{
			return (s + i);

		}

		i++;
	}

	if (c == '\0')

	{
		return (s + i);
	}

	return (NULL);

}
