#include "main.h"

int main(void)
{
	_printf("a random number %d . %s", -762534, "a random text\n");
	_printf("%x\n",123557585);
	_printf("unsigned %u\n",-123673);
	_printf("This is octal %o\n",666);
	_printf("Character:[%c]\n", 'H');
	_printf("Just a normal string\n");
	_printf("Unknown:[%r]\n");
	_printf("Percent:[%%]\n");
	return (0);
}
