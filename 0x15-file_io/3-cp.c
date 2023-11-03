#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - To copy text from one file to other file
 * @argc: This is used to count the argument
 * @argv: Entered arguments
 * Return: 1 if successful, or exit
 */
int main(int argc, char *argv[])
{
	int pen, ken, she = 1024, facts, tact, chill;
	unsigned int kat = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char tenth[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	pen = open(argv[1], O_RDONLY);
	check_IO_stat(pen, -1, argv[1], 'O');
	ken = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, kat);
	check_IO_stat(ken, -1, argv[2], 'W');
	while (she == 1024)
	{
		she = read(pen, tenth, sizeof(tenth));
		if (she == -1)
			check_IO_stat(-1, -1, argv[1], '0');
		facts = write(ken, tenth, she);
		if (facts == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	tact = close(pen);
	check_IO_stat(tact, pen, NULL, 'C');
	chill = close(ken);
	check_IO_stat(chill, ken, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - This is to check file opening and closing
 * @stat: The file that needs to be opened
 * @filename: file identity
 * @mode: Open or either close mode
 * @fd: Descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}
