#include <stdio.h>
#include "main.h"
/**
 * print_rev- checks if a character is upper or lower case
 * @s: a rubbish integer pointer
 *
 * Return: Doesnt return shit
*/
void print_rev(char *s)
{
char *firstPointer;

firstPointer = s;
while (*s != '\0')
s++;
while (s >= firstPointer)
{
putchar(*s);
s--;
}
}
