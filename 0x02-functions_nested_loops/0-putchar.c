#include "main.h"

/**
 * main - prints putchar
 * Return: 0 on success :)
 */
int main(void)
{
	char string[100] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(string[i]);

	}
	_putchar('\n');

	return (0);
}
