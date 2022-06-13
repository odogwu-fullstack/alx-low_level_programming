#include "main.h"
/**
* decideSpaces- checks if a character is upper or lower case
* @multiplication: an integer between 0 and 15
* @firstCounter: an integer between 0 and 15
*
* Return: Doesnt return shit
*/

void decideSpaces(int multiplication, int firstCounter)
{
if (multiplication + firstCounter >= 100)
{
_putchar(',');
_putchar(' ');
}
else if (multiplication + firstCounter >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
}

/**
* print_times_table - checks if a character is upper or lower case
* @n: an integer between 0 and 15
*
* Return: Doesnt return shit
*/
void print_times_table(int n)
{
int firstCounter, secondCounter, multiplication;
int firstDigit, secondDigit, lastDigit;

if (n < 0 || n > 15)
return;
for (firstCounter = 0; firstCounter <= n; firstCounter++)
{
for (secondCounter = 0; secondCounter <= n; secondCounter++)
{
multiplication = firstCounter * secondCounter;
if (multiplication >= 100)
{
lastDigit = multiplication % 10;
secondDigit = multiplication / 10 % 10;
firstDigit = multiplication / 100;
_putchar(firstDigit + '0');
_putchar(secondDigit + '0');
_putchar(lastDigit + '0');
}
else if (multiplication >= 10)
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
if (secondCounter == n)
{
_putchar('\n');
break;
}
decideSpaces(multiplication, firstCounter);
}
}
}
