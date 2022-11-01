#include "main.h"

/**
 *
*/
int main(int argc, char **argv)
{

  int from;
  int r;
  int to;
  int w;

  int close_error;
  char *buffer;

  if (argc != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }
  
  buffer = malloc(sizeof(char) * 1024);
  if (buffer == NULL)
    {
      dprintf(STDERR_FILENO, "Error can't write to %s\n", argv[2]);
      exit(99);
    }

  from = open(argv[1], O_RDONLY);
  r = read(from, buffer, 1024);
  to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

  do
    {
      if (from == -1 || r == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	  free(buffer);
	  exit(98);
	}
      
      w = write(to, buffer, r);
      if (to == -1 || w == -1)
	{
	  dprintf("Error: Can't write to %s\n", argv[2]);
	  free(buffer);
	  exit(99);
	}

      r = read(from, buffer, 1024);
      to = open(argv[2], O_WRONLY | O_APPEND);
    } while (r > 0);

  free(buffer);
  close_error = close(from);
  close_error = close(to);

  if (close_error == -1 || close_error == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_error);
      exit(100);
    }
  
  return (0);
}
