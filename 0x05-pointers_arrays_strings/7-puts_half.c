#include <stdio.h>
/**
* puts_half - checks if a character is upper or lower case
* @str: a rubbish integer pointer
*
* Return: Doesnt return shit
*/
void puts_half(char *str)
{
int length = 0;
char *firstPointer;
int counter;
firstPointer = str;

while (*str != '\0')
{
length++;
str++;
}
str = firstPointer;
counter = length / 2;
if (length % 2 != 0)

counter = (length + 1) / 2;

while (counter < length)
{
putchar(*(str + counter));
counter++;
}
putchar('\n');
}
