#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: File to open
 * @text_content: Text to append
 *
 * Returns: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, l = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[l])
		l++;
	fd = open(filename, O_WRONLY |O_APPEND);
	if (fd < 0)
		return (-1);
	if (l == 0)
		return (1);
	wr = write(fd, text_content, l);
	close(fd);
	if (wr < 0)
	{
		return (-1);
	}
	return (1);
}
