#include "shell.h"

/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	unsigned int stat;

	do {
		stat = _shell_instance();
		if (stat == 3)
			stat = 0;
	} while (stat);

	return (0);
}
