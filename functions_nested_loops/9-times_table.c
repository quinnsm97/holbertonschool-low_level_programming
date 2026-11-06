#include "main.h"
/**
 * times_table - prints the 9 times table, starting from 0
 */

void times_table(void)
{
int r;
int c;
int a;

for (r = 0; r < 10; r++)
{
for (c = 0; c < 10; c++)
{
a = r * c;

if (c > 0)
{
_putchar(',');
_putchar(' ');
if (a < 10)
_putchar(' ');
}

if (a >= 10)
_putchar(a / 10 + '0');

_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
