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
  int open_file;
  int write_file;
  int length;

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
  if (text_content == NULL)
    {
      open_file = open(filename, O_CREAT, 0600);
    }
  else
    {
      open_file = open(filename, O_CREAT, 0600);
      write_file = write(open_file, text_content, length);
    }
  if (open_file == -1 || write_file == -1)
    {
      return (-1);
    }

  return (1);
}
