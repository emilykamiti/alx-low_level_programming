#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - my luck
 * Prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}


