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

/* prototypes_file_memory_functions1.c */
char *memory_set(char *, char, unsigned int);
void f_free(char **);
void *_realloc(void *, unsigned int, unsigned int);

/* prototype_file_memory_functions2.c */
int my_free(void **);

/* prototype_file_more_functions.c */
int _atoi(char *s);
int is_delim(char c, char *delim);
int interactive(info_t *info);
int _isalpha(int c);

/*prototypes more_shell_functions_managing_errors.c */
void remove_comments(char *buf);
int _erratoi(char *s);
char *convert_number(long int num, int base, int flags);
void print_error(info_t *info, char *estr);
int print_d(int input, int fd);

/* Prototypes_file_lists1.c */
list_t *add_node(list_t **, const char *, int);
list_t *add_node_end(list_t **, const char *, int);
size_t print_list_str(const list_t *);
int delete_node_at_index(list_t **, unsigned int);
void free_list(list_t **);

/* Prototypes_file_lists2.c */
size_t list_len(const list_t *);
char **list_to_strings(list_t *);
size_t print_list(const list_t *);
list_t *node_starts_with(list_t *, char *, char);
ssize_t get_node_index(list_t *, list_t *);

#endif
