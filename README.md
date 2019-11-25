# Simple_Shell

Our Simple_Shell is able to 

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


### Error message

|Name  | Description |
|:----:|:------:|
| perror_permission | prints the permission denied error message. This is being used in switch cases.|
| perror_file | prints the no such file or directory error message. |
| perror_command | prints the command not found error message. |


### Built-ins

| Name  | Description |
|:-----:|:------:|
| ptr_array_print | This built-in prints an array of strings. the array of string contain the variables. This returns the number of strings printed. |
| exit_status | exits the program with specific exit statys and frees the allocated memory. |

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

### And coding style tests

```
Give an example
```

## Built With

## Contributing