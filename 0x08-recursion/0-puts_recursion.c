#include "main.h"

/**
* _puts_recursion - function that prints a string, followed by a new line
*
* @s: String
*
* Return: void
*/
void _puts_recursion(char *s)
{
	_puts_recursion(*s)

	_putchar ('\n');

	return (0);
}
