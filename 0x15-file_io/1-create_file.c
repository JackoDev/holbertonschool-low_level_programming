#include "holberton.h"
/**
 * create_file - create a file.
 * @filename: name of the new file.
 * @text_content: string to write in the file
 * Return: 1 on success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int openfile, writefile, size;

	if (filename == NULL)
		return (-1);

	openfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (openfile == -1)
			return (-1);

	if (text_content == NULL)
		text_content = "";

	for (size = 0; text_content[size] != '\0'; size++)
		{
		}

	writefile = write(openfile, text_content, size);
		if (writefile == -1 || writefile != size)
			return (-1);
	close(openfile);
	return (1);
}
