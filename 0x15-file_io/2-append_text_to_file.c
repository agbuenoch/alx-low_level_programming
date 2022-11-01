#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: constant character-pointer
 * @text_content: character-pointer
 *
 * Return: integer
*/
int append_text_to_file(const char *filename, char *text_content)
{
int open_file;
int write_file;
int length;
length = 0;
if (text_content != NULL)
{
for (; text_content[length] ;)
length++;
}
if (filename == NULL)
{
return (-1);
}
open_file = open(filename, O_WRONLY | O_APPEND);
write_file = write(open_file, text_content, length);
if (open_file == -1 || write_file == -1)
{
return (-1);
}
close(open_file);
return (1);
}
