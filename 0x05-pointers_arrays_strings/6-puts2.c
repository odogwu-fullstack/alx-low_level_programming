#include <stdio.h>
#include "main.h"
/**
* puts2- checks if a character is upper or lower case
* @str: a rubbish integer pointer
*
* Return: Doesnt return shit
*/
void puts2(char *str)
{
int counter = 0;
int length = 0;
char *firstPointer;

firstPointer = str;
while (*str != '\0')
{
length++;
str++;
}
str = firstPointer;
while (counter < length)
{
putchar(*(str + counter));
counter += 2;
}
putchar('\n');
}
