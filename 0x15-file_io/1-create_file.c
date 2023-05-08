#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
*create_file - creates a file
*@filename: name of the file
*@text_content: NULL terminated string to write to the file
*
*Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int length_of_string = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = (open(filename, O_CREAT |
		O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR));
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	if (text_content != NULL)
	{
		for (; text_content[length_of_string] != '\0'; length_of_string++)
		{
		}
	}
	if (write(file_descriptor, text_content, length_of_string) == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	return (1);
}
