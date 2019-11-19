#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>

void del_newline(char *s);
int exit_check(char *buf);
char *get_path(char *comm, char **env, int *ret_value);
char *env_path_parse(char **env);
int _strlen(char *s);
char *path_combo(char *dir, char *comm);
void print_prompt(void);
int print_string(char *s);

#endif
