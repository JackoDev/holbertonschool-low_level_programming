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

	openfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IWUSR);
		if (openfile == -1)
			return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size] != '\0'; size++)
		{
		}

		writefile = write(openfile, text_content, size);
			if (writefile == -1 || writefile != size)
				return (-1);
	}
	return (1);
}
