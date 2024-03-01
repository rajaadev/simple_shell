#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


/*prototypes_file_err_string_functions.c*/
void _eputs(char *);
int _eputchar(char);
int _putfd(char c, int fd);
int _putsfd(char *str, int fd);

/* prototypes_file_string_functions1.c */
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

/* prototypes_file_string_functions2.c */
int _putchar(char);
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);


/* prototypes_file_string_functions3.c */
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);

/* prototypes_file_string_functions4.c */
char **strtow(char *, char *);
char **strtow2(char *, char);

/* prototypes_file_memory_functions1.c  */
char *memory_set(char *, char, unsigned int);
void f_free(char **);
void *_realloc(void *, unsigned int, unsigned int);

/* prototype_file_memory_functions2.c  */
int my_free(void **);

#endif
