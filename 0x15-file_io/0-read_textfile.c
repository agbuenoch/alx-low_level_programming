#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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
  int fd;
  char *read_into;
  ssize_t count;
  
  
  read_into = malloc(sizeof(char) * letters);
  
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    {
      return (0);
    }

  read(fd, read_into, letters);
  read_into = '\0';
  close(fd);

  while (*read_into)
    {
      count++;
      read_into++;
    }
  return (count);
}
