#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add to the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile, size;

	if (filename == NULL)
		return (-1);

	openfile = open(filename, O_WRONLY | O_APPEND);
		if (openfile == -1)
			return (-1);

	if (text_content == NULL)
		text_content = "";

	for (size = 0; text_content[size] != '\0'; size++)
		{
		}

	writefile = write(openfile, text_content, size);
		if (writefile == -1)
			return (-1);
	close(openfile);
	return (1);
}
