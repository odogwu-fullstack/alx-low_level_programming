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
long int firstIndex = s;
long int lastIndex = 0;
long int i;

while (*(s + lastIndex) != '\0')
{
lastIndex++;
}
for (i = lastIndex - 1; i >= firstindex; --i)
{
putchar(*(s + i));
}
putchar('\n');
}
