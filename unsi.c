#include "main.h"

void unsi(int n)
{
	int arr[64], i = 0;
	if (n < 0)
		n = n * (-1);
	while (n)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar('0' + arr[i]);
		i--;
	}
}
