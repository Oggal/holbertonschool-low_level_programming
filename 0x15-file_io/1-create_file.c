#include "main.h"

/**
 * create_file - Create a new File
 *@filename: File to create
 *@text_content: Contents to Add
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename,char *text_content)
{
	int fd, writeResult, len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len])
		len++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	writeResult = write(fd, text_content, len);
	if (writeResult < 1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
