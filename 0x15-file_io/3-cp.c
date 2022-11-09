#include "main.h"

/**
 *main - cp, copy a file to a file
 *@argVal: Value of Argements
 *@argCount: Number of Arguments
 *
 * Return: Hopefully 0
 */
int main(int argCount, char **argVal)
{
	char Buff[1024] = {0};
	int fd_H, fd_C, wr, len = 0;


	if (argCount != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argVal[0]);
		exit(97);
	}
	fd_H = open(argVal[1], O_RDONLY);
	if (fd_H < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argVal[1]);
		exit(98);
	}
	fd_C = open(argVal[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_C < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argVal[2]);
	}
	while ((len = read(fd_H, Buff, 1024)) == 1024)
		wr = write(fd_C, Buff, len);
	wr = write(fd_C, Buff, len);
	close(fd_H);
	close(fd_C);

	return (0);
}
