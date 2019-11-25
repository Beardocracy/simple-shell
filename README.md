# Simple_Shell

Our Simple_Shell is an awesome entry way into the world of computers. This shell can work on any operating system or computer.

## Getting Started


### Functions

| Name  | Description |
|:-----:|:------:|
| _strtok() | This function takes a string and seperates it into tokens by putting a null terminator where the specified delimiter is located. |
| _getenv | |
| access |  |
| free | This function frees up the memory that was allocated for the string, array or integer, etc. |
| wait | |
| execve | |
| del_newline | this function overwrites a newline character before the null character in a string. This function is being used with get_line |
| _strdup | copies and allocates memory for a sting. returns a pointer to malloc'd space containing the copy of the string. |
| _strcmp | Custom built function that compares two strings. |
| _strlen | Custom built function that returns the length of a string |
| path_combo | This function combines two strings with a / symbol in between them. After, they have been combined and malloced, it is returns a pointer.|
| env_path_parse | This function parses the pathline from the environment variable. After the memory is allocated for the array of strings, it returns the environment variable line. |
| free_if_needed | This function frees the allocated memory of a pointer if it is not null. |
| free_array | This function frees the string in a pointer array. |
| get_path |  This function returns the absolute path to a command. |
| built_ins_abs_paths_check | Checks the initial command. |
| executer | This function was build to make sure that execve kills any child process. Travis decided to put exit(187) as a safety measure. |
| _putchar | This function allows you to print a character to standard out(stdout). |
| print_prompt | This function prints the command line prompt. |
| print_string | This lets you print a string ended with a null terminator. |
| _atoi | this function helps convert a string to an integer. |


### Error message

|Name  | Description |
|:----:|:------:|
| perror_permission | prints the permission denied error message. This is being used in switch cases.|
| perror_file | prints the no such file or directory error message. used in a switch case |
| perror_command | prints the command not found error message. used in a switch case |


### Built-ins

| Name  | Description |
|:-----:|:------:|
| ptr_array_print | This built-in prints an array of strings. the array of string contain the variables. This returns the number of strings printed. |
| exit_status | exits the program with specific exit statys and frees the allocated memory. |


### Switch



### Compilation

With the command below, this will be used to compile our shell

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Running the tests


```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
## Contributing