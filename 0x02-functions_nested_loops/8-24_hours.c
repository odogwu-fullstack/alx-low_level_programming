#include "main.h"
/**
 * jack_bauer - checks if a character is upper or lower case
 *
 * Return: Doesnt return shit
 */
void jack_bauer(void)
{
int firstHour;
int secondHour;
int firstMinute;
int secondMinute;

for (firstHour = 0; firstHour < 3; firstHour++)
{
for (secondHour = 0; secondHour < 10; secondHour++)
{
if (firstHour == 2 && secondHour == 4)
break;
for (firstMinute = 0; firstMinute < 6; firstMinute++)
{
for (secondMinute = 0; secondMinute < 10; secondMinute++)
{
_putchar(firstHour + '0');
_putchar(secondHour + '0');
_putchar(':');
_putchar(firstMinute + '0');
_putchar(secondMinute + '0');
_putchar('\n');
}
}
}
}
}
