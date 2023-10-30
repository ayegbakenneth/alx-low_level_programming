#include <stddef.h>
#include <sys/stat.h>
#include "main.h"
/**
 * read_textfile - This function is to read files
 * @filename: Name of the file to read
 * @letters: Total letters
 * Return: If success, the letters or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ken;
	ssize_t _mail, _ismail;
	char *mary;

	if (!filename)
	{
		return (0);
	}
	ken = open(filename, O_RDONLY);
	if (ken == -1)
		return (0);
	mary = malloc(sizeof(char) * letters);
	if (mary == NULL)
		return (0);
	_mail = read(ken, mary, letters);
	if (_mail == -1)
	{
		free(mary);
		close(ken);
		return (0);
	}
	_ismail = write(ken, mary, letters);
	if (_ismail == -1)
	{
		free(mary);
		close(ken);
		return (0);
	}
	close(ken);
	return (_mail);
}
