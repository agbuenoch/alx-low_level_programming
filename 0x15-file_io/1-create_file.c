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

  length = 0;

  while (*text_content)
    {
      length++;
      text_content++;
    }
  length += 1;
  
  if (filename == NULL)
    {
      return (-1);
    }


      if (text_content == NULL)
	{
	  fd = open(filename, O_CREAT | O_WRONLY, 0600);
	    if (fd == -1)
	      {
	       return (-1);
	      }
	    }
      else
	{
	  fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	  if (fd == -1)
	    {
	      return (-1);
	    }
	  write(fd, text_content, length + 1);
	}
      
  return (1);
}
