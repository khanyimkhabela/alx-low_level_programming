#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed on to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Arguments number
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
