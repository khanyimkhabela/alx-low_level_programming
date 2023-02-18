#include <stdio.h>
#include <stdib.h>
/**
 * main - prints the alphabet in lowercase,followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
