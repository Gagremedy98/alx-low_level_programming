#include <unistd.h>

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
