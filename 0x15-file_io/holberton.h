#ifndef HOLBERTON_H
#define HOLBERTON_H

/* declaration of function to read text file and print to stdout (0)*/
ssize_t read_textfile(const char *filename, size_t letters);

/* declaration of function to create a file (1)*/
int create_file(const char *filename, char *text_content);

/* declaration of function to append text to end of file (2)*/
int append_text_to_file(const char *filename, char *text_content);

#endif
