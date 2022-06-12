#include "main.h"
/**
 * print_last_digit - checks if a character is upper or lower case
 * @n: an integer value
 *
 * Return: absolute value of a number
 */
int print_last_digit(int n)
{
int lastDigit;

if (n < 0)
n = -n;
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
