#include <stdio.h>
/**
 * main - checks if a character is upper or lower case
 *
 * Return: Doesnt return shit
 */
int main(void)
{
int start;
int sum = 0;
for (start = 0; start < 1024; start++)
{
if (start % 3 == 0 || start % 5 == 0)
sum += start;
}
printf("%d\n", sum);
return (0);
}
