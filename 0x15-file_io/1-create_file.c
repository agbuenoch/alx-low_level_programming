#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: constant character-pointer
 * @text_context: character-pointer
 *
 * Return: integer
*/
int create_file(const char *filename, char *text_content)
{
  int fd;
  int length;
  char *err = "fails";

  length = 0;

  while (*text_content)
    {
      length++;
      text_content++;
    }
  
  if (filename == NULL)
    {
      return (-1);
    }

  if (filename)
    {
      fd = open(filename, O_RDWR);
    }
  else
    {
      fd = open(filename, O_CREAT, 0600);
      write(fd, text_content, length + 1);
    }
  if (fd == -1)
    {
      while (*err)
	{
	  _putchar(*err);
	  err++;
	}
      return (-1);
    }

  /*  write(fd, text_content, length);*/
  
  return (1);
}
