#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <errno.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
*main -  copies the content of a file to another file
*@argc: argument count
*@argv: argument vector
*
*Return: return 0
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, read_file, write_file, close_to, close_from;
	char buffer[BUFFER_SIZE];


	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	while ((read_file = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_file = write(file_to, buffer, read_file);
		if (write_file == -1 || file_to == -1)
		{
			dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	}
	close_to = close(file_to);
	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	close_from = close(file_from);
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
