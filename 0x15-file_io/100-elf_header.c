#include <string.h>
#include <elf.h>
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
*main - displays the information contained in the ELF header
*	at the start of an ELF file
*@argc: argument count
*@argv: argument vector
*
*Return: return 0
*/
int main(int argc, char *argv[])
{
	char *filename = argv[1];
	int file_descriptor, read_file;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(2, "Invalid number of arguments\n");
		exit(98);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(2, "could not open file\n");
		exit(98);
	}
	read_file = read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr));
	if (read_file != sizeof(Elf64_Ehdr) || read_file == -1)
	{
		dprintf(2, "could not read the file\n");
		exit(98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "The file is not an elf file");
		exit(98);
	}
	printf("Magic:	%c%c%c%c\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
		elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
	printf("Class:		");
	while (1)
	{
		if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
		{
			printf("ELF32\n");
			break;
		}
		else if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
		{
			printf("ELF64\n");
			break;
		}
		else
		{
			printf("Invalid class\n");
			break;
		}
	}
	printf("Data:		");
	while (1)
	{
		if (elf_header.e_ident[EI_DATA] == ELFDATA2LSB)
		{
			printf("2's complement, little endian\n");
			break;
		}
		else if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		{
			printf("2's complement, big endian\n");
			break;
		}
		else
		{
			printf("the data encoding is invalid\n");
			break;
		}
	}
	printf("Version:	%d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:		");
	while (1)
	{
		if (elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV)
		{
			printf("UNIX System V ABI\n");
			break;
		}
		else if (elf_header.e_ident[EI_OSABI] == ELFOSABI_HPUX)
		{
			printf("HP-UX ABI\n");
			break;
		}
		else if (elf_header.e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		{
			printf("NetBSD ABI\n");
			break;
		}
		else if (elf_header.e_ident[EI_OSABI] == ELFOSABI_LINUX)
		{
			printf("Linux ABI\n");
			break;
		}
		else if (elf_header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		{
			printf("Solaris ABI\n");
			break;
		}
		else if (elf_header.e_ident[EI_OSABI] == ELFOSABI_AIX)
		{
			printf("AIX ABI\n");
			break;
		}
		else if (elf_header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		{
			printf("FreeBSD ABI\n");
			break;
		}
		else
		{
			printf("Unknown OS/ABI\n");
			break;
		}
	}
	printf("ABI Version:		%d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:		");
	while (1)
	{
		if (elf_header.e_type == ET_NONE)
		{
			printf("None\n");
			break;
		}
		else if (elf_header.e_type == ET_REL)
		{
			printf("file is relocatable\n");
			break;
		}
		else if (elf_header.e_type == ET_EXEC)
		{
			printf("Executable file\n");
			break;
		}
		else if (elf_header.e_type == ET_DYN)
		{
			printf("Shared object file\n");
			break;
		}
		else if (elf_header.e_type == ET_CORE)
		{
			printf("Core file\n");
			break;
		}
		else
		{
			printf("Unknown type\n");
			break;
		}
	}
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);
	close(file_descriptor);
	return (0);
}
