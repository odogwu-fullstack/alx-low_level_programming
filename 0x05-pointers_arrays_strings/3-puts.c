#include "main.h"
/**
* _puts- checks if a character is upper or lower case
* @str: a rubbish integer pointer
*
* Return: Doesnt return shit
*/
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
