#ifndef SHELL_H
#define SHELL_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <limits.h>
#include <sys/wait.h>

#define BUFFER 1024
#define MAX_ARGS 10
#define UNUSED  __attribute__((unused))

extern char **environ
/**
 */
typedef struct Node
{
	char **env_var;
	int data;
} Node;

/** HELPER FUNCTIONS **/
int str_len(char *s);
void str_copy(char *src, char *dest);
void str_cat(char *src, char *dest);
char *strchr(char *s, char c);
int _strcspn(*char *s, char *src);
int _strcmp(char *s, char *c);


/** PROTOTYPE **/
char *_getenv(const char *name);
int _env(Node *e);
void _env_help(char *input, Node *e);
int _setenv(char **arg);
int _unsetenv(char **arg);
void _exit(char **r, int status);
void free_arr(char **arg);
int _perror(char *s);
void print_error(char **a, char *err);
char *_strtok(char *str, const char *delim);
int env_cmd(char **arg);
int exec(char **arg);
char *_path(char *arg);
char *_getline(void);
char *prompt(ssize_t *arg);
#endif
