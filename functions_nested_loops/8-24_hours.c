#include "main.h"

/**
  * jack_bauer - prints every minute of the day.
  */

void jack_bauer(void)
{
	int f = '0';
	int s = '0';
	int t = '0';
	int l = '0';
	int m;

	for (m = 0; m < 1440; m++)
	{
		_putchar(f);
		_putchar(s);
		_putchar(':');
		_putchar(t);
		_putchar(l);
		_putchar('\n');
		l++;
		if (l > '9')
		{
			l = '0';
			t++;
		}
		if (t > '5')
		{
			t = '0';
			l = '0';
			s++;
		}
		if (s > '9')
		{
			s = '0';
			t = '0';
			l = '0';
			f++;
		}
	}
}



