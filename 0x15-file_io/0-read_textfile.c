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
  int fd;
  char *read_into;
  ssize_t count;
  
  count = 0;  

  read_into = malloc(sizeof(char) * letters);
  if (read_into == NULL)
    {
      return (0);
    }
  if (filename == NULL)
    {
      return (0);
    }
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    {
      return (0);
    }

   read(fd, read_into, letters);
   
   /* read_into = '\0';*/

  while (*read_into)
    {
      _putchar(*read_into);
      count++;
      read_into++;
    }

  close(fd);
  
  return (count);
}
