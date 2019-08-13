#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: PAth of the file.
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t countok;
	int openfile, readfile, writefile;
	char buffer;

	if (filename == NULL)
		return (0);

	openfile = open(filename, O_RDWR);
		if (openfile == -1)
			return (0);
	readfile = read(openfile, &buffer, 1);
		if (readfile == -1)
			return (0);

	for (countok = 0; readfile != 0 && countok < letters; countok++)
	{
		writefile = write(STDOUT_FILENO, &buffer, 1);
			if (writefile == -1)
				return (0);
		readfile = read(openfile, &buffer, 1);
			if (readfile == -1)
				return (0);
	}
	readfile = close(openfile);
		if (readfile == -1)
			return (0);
	return (countok);
}
