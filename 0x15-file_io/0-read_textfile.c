#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*@filename: pointer to the filename
*@letters: number of letters that the function should print
*
*Return: returns the actual number of letters it could read and print
*	or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	ssize_t bytes_to_read;
	ssize_t bytes_written;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_to_read = read(file_descriptor, buffer, letters);
	if (bytes_to_read == -1)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_to_read);
	if (bytes_written == -1 || bytes_written != bytes_to_read)
	{
		close(file_descriptor);
		return (0);
	}
	close(file_descriptor);
	return (bytes_written);
}
