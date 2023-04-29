#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 1024

void print_error(char *msg) {
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

int main(int argc, char **argv)
{
    int fd = open(argv[1], O_RDONLY);
    /*char buf[BUF_SIZE];*/
int i;
    Elf64_Ehdr header;
    
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }


    if (fd < 0) {
        print_error("Error: Cannot open file");
    }




    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Error: Cannot read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Error: Not an ELF file");
    }

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

    printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

    printf("Version: %d\n", header.e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV: printf("UNIX System V ABI\n"); break;
        case ELFOSABI_HPUX: printf("HP-UX ABI\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone (embedded) application\n"); break;
        default: printf("Unknown\n"); break;
    }

    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

    printf("Type: ");
    switch (header.e_type) {
        case ET_REL: printf("Relocatable file\n"); break;
        case ET_EXEC: printf("Executable file\n"); break;
        case ET_DYN: printf("Shared object file\n"); break;
        default: printf("Unknown\n"); break;
    }

    printf("Entry point address: 0x%lx\n", header.e_entry);

    close(fd);
    return 0;
}
