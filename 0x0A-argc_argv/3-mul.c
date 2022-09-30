#include "main.h"
#include <stdio.h>

/**
* main - multiplies two numbers
* @argc: Arg count
* @argv: Arg vector
*
* Return: Always 0
*/
int main(argc, char *argv[])
{
	n1 = 0;
	n2 = 0;

	if (argc == 3)
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1*n2);
	}
	else
	{
	printf("Zero error\n");
	return (1);
	}
	return (0);
}
