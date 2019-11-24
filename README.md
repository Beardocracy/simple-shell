# Simple-Shell

Our Simple-Shell is able to 

## Getting Started


### Functions

| Type  | Output |
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
| env_path_parse | this function parses the pathline from the environment variable. After the memory is allocated for the array of strings, it returns the environment variable line. |


```
Give examples
```

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