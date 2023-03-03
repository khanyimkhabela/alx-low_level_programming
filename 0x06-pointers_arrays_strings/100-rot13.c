#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using  rot13
 * @r: pointer to string params
 * Return: *r
 */
char *rot13(char *r)
{
int i;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; r[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (r[i] == data1[j])
{
r[i] = datarot[j];
break;
}
}
}
return (r);
}

