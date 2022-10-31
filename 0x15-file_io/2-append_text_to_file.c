#include "main.h"
/**
 * 
*/
int append_text_to_file(const char *filename, char *text_content)
{

  int fd;
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

  if ((text_content == NULL) | (access(filename, F_OK) != 0))
    {
      return (-1);
    }

  fd = open(filename, O_APPEND);

  write(fd, text_content, length);
  return (1);
}
