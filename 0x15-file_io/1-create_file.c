#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: constant character-pointer
 * @text_content: character-pointer
 *
 * Return: if the function fails = -1
 *                otherwise = 1
 *
 * Description: Created file must have rw------- permission.
 *              if the file already exist, truncate it.
 *              if text_content is NULL, create empty file.
*/
int create_file(const char *filename, char *text_content)
{
int open_file;
int write_file;
int length;
length = 0;
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
if (filename == NULL)
{
return (-1);
}
open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
write_file = write(open_file, text_content, length);
if (open_file == -1 || write_file == -1)
{
return (-1);
}
close(open_file);
return (1);
}
