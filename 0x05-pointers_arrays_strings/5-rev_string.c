#include <stdio.h>
/**
* rev_string - checks if a character is upper or lower case
* @s: a rubbish integer pointer
*
* Return: Doesnt return shit
*/
void rev_string(char *s)
{
char *firstPointer = s;
int len = 0;
char *lastPointer = s;
int i;
char temp;
while (*s != '\0')
{
len++;
s++;
}
lastPointer += len - 1;
for (i = 0; i < len / 2; i++)
{
temp = *lastPointer;
*lastPointer = *firstPointer;
*firstPointer = temp;
firstPointer++;
lastPointer--;
}
}
