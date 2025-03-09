# Libft

Libft is a custom implementation of standard C library functions. This project is part of the 42 School curriculum and aims to recreate various standard library functions to understand their inner workings and improve programming skills.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Bonus Functions](#bonus-functions)

## Installation

To compile the library, run the following command in the project directory:

```sh
make
```
To include the bonus functions, run: make bonus

## Usage
Include the libft.h header file in your C project and link the compiled library libft.a during the compilation of your project.

Example:

```
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, World!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

Compile your project with the library: gcc -Wall -Wextra -Werror -o my_program my_program.c -L. -lft

## Functions

The library includes the following functions:
```
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_strlen
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_strlcpy
ft_strlcat
ft_calloc
ft_strdup
ft_toupper
ft_tolower
ft_strchr
ft_strncmp
ft_memchr
ft_memcmp
ft_strnstr
ft_atoi
ft_strrchr
ft_substr
ft_itoa
ft_putchar_fd
ft_strjoin
ft_strtrim
ft_strmapi
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
ft_striteri
ft_split
```
## Bonus Functions

The library also includes additional functions for linked list manipulation:
```
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
License
