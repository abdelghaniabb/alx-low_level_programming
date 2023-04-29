
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 1024
/**
 * print_error - print error
 * @msg: message
 * Return: void
 */
void print_error(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}
/**
 * switch1 - switch
 * @c: pointer
 * Return: void
 */
void switch1(unsigned char *c)
{
	switch (*c)
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
/*case ELFOSABI_STANDALONE:*/
/*			printf("Standalone (embedded) application\n");*/
/*			break;*/
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * switch2 - switch
 * @c: pointer
 * Return: void
 */
void switch2(Elf64_Half *c)
{
	switch (*c)
	{
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * main - check code
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	int i;
	Elf64_Ehdr header;
	char *char1, *char2, *c4;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	if (fd < 0)
		print_error("Error: Cannot open file");
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Cannot read ELF header");
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Error: Not an ELF file");
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	char1 = "ELF64", char2 = "ELF32";
	c4 = "  Class:                             ";
	printf("%s%s\n", c4, header.e_ident[EI_CLASS] == ELFCLASS64 ? char1 : char2);
	char1 = "2's complement, little endian", char2 = "2's complement, big endian";
	c4 = "  Data:                              ";
	printf("%s%s\n", c4, header.e_ident[EI_DATA] == ELFDATA2LSB ? char1 : char2);
	char1 = "  Version:                           ";
	printf("%s%d (current)\n", char1, header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch1(&(header.e_ident[EI_OSABI]));

	char1 = "  ABI Version:                       ";
	printf("%s%d\n", char1, header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch2(&(header.e_type));

	printf("  Entry point address:               0x%lx\n", header.e_entry);

	close(fd);
	return (0);
}
