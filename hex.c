#include "main.h"

void hex(unsigned int n)
{
	int arr[64], i = 0;

	while (n)
	{
		arr[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		switch (arr[i])
		{
			case (10):
				_putchar('a');
				break;
			case (11):
				_putchar('b');
				break;
			case (12):
				_putchar('c');
				break;
			case (13):
				_putchar('d');
				break;
			case (14):
				_putchar('e');
				break;
			case (15):
				_putchar('f');
				break;
			default:
				_putchar('0' + arr[i]);
				break;
		}
		i--;
	}
}
