#include "main.h"
/**
 * append_text_to_file - putting text at files end
 * @filename: name of the file
 * @text_content: content added
 * Return: 1 if success or -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ken;
	int john;
	int mike;

	if (!filename)
		return (-1);
	ken = open(filename, O_WRONLY | O_APPEND);
	if (ken == -1)
		return (-1);
	if (text_content)
	{
		for (john = 0; text_content[john]; john++)
			;
		mike = write(ken, text_content, john);
		if (mike == -1)
			return (-1);
	}
	close(ken);
	return (1);
}
