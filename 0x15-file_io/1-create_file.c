#include "main.h"
/**
 * create_file - This function create files
 * @filename: the file
 * @text_content: written content
 * Return: 1 if success or -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int ken;
	int james;
	int wise;

	if (!filename)
		return (-1);
	ken = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ken == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (james = 0; text_content[james]; james++)
		;
	wise = write(ken, text_content, james);
	if (wise == -1)
		return (-1);
	close(ken);
	return (1);
}
