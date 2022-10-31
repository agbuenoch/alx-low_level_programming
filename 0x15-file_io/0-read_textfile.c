#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: constant character-pointer
 * @letters: size_t parameter
 *
 * Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t open_file;
ssize_t r_file;
ssize_t w_file;
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
if (filename == NULL)
{
return (0);
}
open_file = open(filename, O_RDONLY);
r_file = read(open_file, buffer, letters);
w_file = write(STDOUT_FILENO, buffer, r_file);
if (open_file == -1 || r_file == -1 || w_file == -1 || w_file != r_file)
{
free(buffer);
return (0);
}
free(buffer);
close(open_file);
return (w_file);
}
