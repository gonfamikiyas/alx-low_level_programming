#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf_file(unsigned char *elf_ident);
void print_magic_numbers(unsigned char *elf_ident);
void print_elf_class(unsigned char *elf_ident);
void print_elf_data(unsigned char *elf_ident);
void print_elf_version(unsigned char *elf_ident);
void print_elf_abi(unsigned char *elf_ident);
void print_elf_osabi(unsigned char *elf_ident);
void print_elf_type(unsigned int elf_type, unsigned char *elf_ident);
void print_elf_entry(unsigned long int elf_entry, unsigned char *elf_ident);
void close_elf_file(int elf_file);

/**
 * check_elf_file - Checks a file
 * @elf_ident: A pointer
 *
 * Description: If the file is not an ELF file, exit with code 98.
 */
void check_elf_file(unsigned char *elf_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_ident[i] != 127 &&
		    elf_ident[i] != 'E' &&
		    elf_ident[i] != 'L' &&
		    elf_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic_numbers - Prints the magic number
 * @elf_ident: A pointer to an array
 *
 * Description: Magic number
 */
void print_magic_numbers(unsigned char *elf_ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - Prints header
 * @elf_ident: Array pointer
 */
void print_elf_class(unsigned char *elf_ident)
{
	printf(" Class: ");

	switch (elf_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

/**
 * print_elf_data - Prints the data
 * @elf_ident: Array pointer
 */
void print_elf_data(unsigned char *elf_ident)
{
	printf(" Data: ");

	switch (elf_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_DATA]);
	}
}
/**
 * print_elf_version - Prints the version of an ELF header.
 * @elf_ident: A pointer to an array containing the ELF version.
 */
void print_elf_version(unsigned char *elf_ident)
{
	printf(" Version: %d", elf_ident[EI_VERSION]);

	switch (elf_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_elf_osabi - prints the header
 * @elf_ident: A pointer to an array
 */
void print_elf_osabi(unsigned char *elf_ident)
{
	printf(" OS/ABI: ");

	switch (elf_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_OSABI]);
	}
}

/**
 * print_elf_abi - Prints the ABI version
 * @elf_ident: A pointer to an array
 */
void print_elf_abi(unsigned char *elf_ident)
{
	printf(" ABI Version: %d\n",
		elf_ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - Prints the header
 * @elf_type: ELF type 
 * @elf_ident: A pointer
 */
void print_elf_type(unsigned int elf_type, unsigned char *elf_ident)
{
	if (elf_ident[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type: ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}
/**
 * print_elf_entry - Prints the entry point of an ELF header.
 * @entry_point: The address of the ELF entry point.
 * @elf_ident: A pointer to an array containing the ELF class.
 */
void print_elf_entry(unsigned long int entry_point, unsigned char *elf_ident)
{
	printf(" Entry point address: ");

	if (elf_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry_point = ((entry_point << 8) & 0xFF00FF00) |
			  ((entry_point >> 8) & 0xFF00FF);
		entry_point = (entry_point << 16) | (entry_point >> 16);
	}

	if (elf_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_point);

	else
		printf("%#lx\n", entry_point);
}

/**
 * close_elf_file - Closes an ELF file.
 * @elf_fd: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf_file(int elf_fd)
{
	if (close(elf_fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf_fd);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the header
 * @argc: The number of arguments 
 * @argv: An array of pointers
 * Return: 0 on success.
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, read_status;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf_file(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_status = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_status == -1)
	{
		free(header);
		close_elf_file(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf_file(header->e_ident);
	printf("ELF Header:\n");
	print_magic_numbers(header->e_ident);
	print_elf_class(header->e_ident);
	print_elf_data(header->e_ident);
	print_elf_version(header->e_ident);
	print_elf_osabi(header->e_ident);
	print_elf_abi(header->e_ident);
	print_elf_type(header->e_type, header->e_ident);
	print_elf_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf_file(fd);
	return (0);
}

