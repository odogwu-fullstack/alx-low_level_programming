#include "main.h"
/**
* _strlen- checks if a character is upper or lower case
* @s: a rubbish integer pointer
*
* Return: Doesnt return shit
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
