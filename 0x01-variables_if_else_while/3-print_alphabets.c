#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints lowercase and uppercase
 * Return: 0 (Excellent)
 */

int main(void)

{

	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
