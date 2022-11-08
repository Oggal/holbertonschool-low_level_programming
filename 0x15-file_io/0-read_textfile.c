#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - Read text from file
 * @filename: File to read
 *@letters: Number of letters to read
 *
 * Return: Letters Printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc, size, i, c = 0;
	char *Buff;

	if (filename == NULL)
		return (0);
	Buff = malloc(letters);
	if (Buff == NULL)
		return (0);
	fileDesc = open(filename, O_RDONLY);
	if (fileDesc < 0)
	{
		free(Buff);
		return (0);
	}
	size = read(fileDesc, Buff, letters);
	close(fileDesc);
	for (i = 0; Buff[i] && i < size; i++)
	{
		c += _putchar(Buff[i]);
	}
	return (c);
}
