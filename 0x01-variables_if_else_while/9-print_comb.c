#include <stdio.h>
#include <stdlib.h>
/**
 * main - my luck
 * Prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
Footer
© 2022 GitHub, Inc.
Footer navigation

    Terms
    Privacy
