#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
int i, j, a;

for (a = 0; a < 10; a++)
{
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (!(i == 1 && j >= 5))
{
if (1)
_putchar(i + '0');
_putchar(j + '0');
}
}
}
_putchar('\n');
}
}