#include "main.h"
/**
* times_table - checks if a character is upper or lower case
*
* Return: Doesnt return shit
*/
void times_table(void)
{
int firstCounter;
int secondCounter;
int multiplication;
int firstDigit;
int secondDigit;
for (firstCounter = 0; firstCounter < 10; firstCounter++)
{
for (secondCounter = 0; secondCounter < 10; secondCounter++)
{
multiplication = firstCounter * secondCounter;
if (multiplication >= 10)
{
firstDigit = multiplication / 10;
secondDigit = multiplication % 10;
_putchar(firstDigit + '0');
_putchar(secondDigit + '0');
}
else
{
_putchar(multiplication + '0');
}
if (secondCounter == 9)
{
_putchar('\n');
break;
}
if (multiplication + firstCounter >= 10)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
}
