#include <stdio.h>
/**
 * print_multiples - checks if a character is upper or lower case
 *
 * Return: Doesnt return shit
 */
int print_multiples(void)
{
int start;
int sum = 0;
for (start = 0; start < 1024; start++)
{
if (start % 3 == 0 || start % 5 == 0)
sum += start;
}
printf("%d\n", sum);
return (sum);
}
