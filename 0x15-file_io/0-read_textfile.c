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
  ssize_t read_file;
  ssize_t write_file;

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
  read_file = read(open_file, buffer, letters);
  write_file = write(STDOUT_FILENO, buffer, read_file);
  if (open_file == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
    {
      free(buffer);
      return (0);
    }

  free(buffer);
  close(open_file);
  
  return (write_file);
}
