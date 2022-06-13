#include <stdio.h>
/**
 * print_to_98 - checks if a character is upper or lower case
 * @n: this function takes a parameter to check against
 *
 * Return: Doesnt return shit
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n == 98)
{
printf("%d\n", n);
n++;
continue;
}
printf("%d, ", n);
n++;
}
}
else
{
while (n >= 98)
{
if (n == 98)
{
printf("%d\n", n);
n--;
continue;
}
printf("%d, ", n);
n--;
}
}
}
