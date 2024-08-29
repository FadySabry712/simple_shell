#include "shell.h"

/**
 * _strcpy - copies a str
 * @dest: the dest
 * @src: the sour
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}

/**
 * _strdup - duplicates a str
 * @str: the string to duplicat
 * Return: pointer to the duplicated str
 */
char *_strdup(const char *str)
{
	int len = 0;
	char *retr;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	retr = malloc(sizeof(char) * (len + 1));
	if (!retr)
		return (NULL);
	for (len++; len--;)
		retr[len] = *--str;
	return (retr);
}

/**
 *_puts - prints an input str
 *@str: the string to be print
 * Return: Nothin
 */
void _puts(char *str)
{
	int j = 0;

	if (!str)
		return;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to prin
 * Return: On success 1
 * On error, -1 , and errno is set
 */
int _putchar(char c)
{
	static int j;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || j >= WRITE_BUF_SIZE)
	{
		write(1, buf, j);
		j = 0;
	}
	if (c != BUF_FLUSH)
		buf[j++] = c;
	return (1);
}
