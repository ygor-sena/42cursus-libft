<p align="center">
    <img src="https://user-images.githubusercontent.com/102881479/214134381-5a7ce482-fa10-4d03-a689-991b84cfc3e0.png">
</p>

<p align="center">
    <img src="https://img.shields.io/badge/OS-Linux-blue" alt="OS">
    <img src="https://img.shields.io/badge/Language-C%20%7C%20C%2B%2B-blue.svg" alt="Language">
    <img src="https://img.shields.io/badge/Grade-125%2F100-brightgreen.svg" alt="Grade">
    <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" alt="Status">
</p>

## Introduction 

In this project, we needed to exactly reproduce the behavior of many of the _standard C library_ (i. e. _libc_) functions, adapt some others and, for the bonus project, implement singly linked list functions. In total, forty-two functions were implemented, they are:

### Functions from `<ctype.h>`

| Name | Description |
|:------|:------|
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit from 0 through 9. |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks whether a given character is part of standard ASCII character set. |
| `ft_isascii` | Checks for any printable character. |
| `ft_toupper` | Converts character to uppercase. |
| `ft_tolower` | Converts character to lowercase. |

### Functions from `<string.h>`


| Name | Description |
|:------|:------|
| `ft_memset` | Fills memory with a constant byte. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Moves memory area. |
| `ft_memchr` | Scans memory for a character. |
| `ft_memcmp` | Compares memory areas. |
| `ft_bzero` | Zeroes a byte string. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_strlcpy` | Copies string to a specific size. |
| `ft_strlcat` | Concatenates the string to a specific size. |
| `ft_strchr` | Locates a given character in string. |
| `ft_strrchr` | Locates a given character in string up to n characters. |
| `ft_strncmp` | Compares two strings. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_strdup` | Creates a dupplicate for the string passed as a parameter. |

### Functions from `<stdlib.h>`

| Name | Description |
|:------|:------|
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and sets its bytes values to 0. |


### Non-standard libc functions

| Name | Description |
|:------|:------|
| `ft_itoa` | Converts a number into string. |
| `ft_substr` | Returns a substring from a string. |
| `ft_strjoin` | Concatenates two strings. |
| `ft_strtrim` | Trims the beginning and the end of a string with specific set of characters. |
| `ft_split` | Splits a string using a character as a parameter. |
| `ft_strmapi` | Applies a function to each character of a string. |
| `ft_striteri` | Applies a function to each character of a string. |
| `ft_putchar_fd` | Outputs a character to a file descriptor. |
| `ft_putstr_fd` | Outputs a string to a file descriptor. |
| `ft_putendl_fd` | Outputs a string to a file descriptor, followed by a new line. |
| `ft_putnbr_fd` | Outputs a number to a file descriptor. |

### Singly linked list functions

| Name | Description |
|:------|:------|
| `ft_lstnew` | Creates a new list element. |
| `ft_lstaddfront` | Adds an element at the beginning of a list. |
| `ft_lstsize` | Counts the number of elements in a list. |
| `ft_lstlast` | Returns the last element of the list. |
| `ft_lstadd_back` | Adds an element at the end of a list. |
| `ft_lstclear` | Deletes and frees a list. |
| `ft_lstiter` | Applies a function to each element of a list. |
| `ft_lstmap` | Applies a function to each element of a list. |

## How to compile and use the project

#### 1) Copy this repository to your local workstation

```html
git clone git@github.com:ygor-sena/42cursus-libft.git
```

#### 2) Compile the project with Makefile

```html
make bonus
```

#### 3) Include the header in your code

```html
#include "libft.h"
```

#### 4) Compile it using `gcc` or  `cc` with the following flags

```html
-lft -L path/to/libft.a -I path/to/libft.h 
```

## References
- General references
  - SCHILDT, Herbert. C Completo e Total. 2010.
  - Tips for 42's students: https://github.com/agavrel/42_CheatSheet by [Antonin GAVREL](https://github.com/agavrel)
  - [Libft functions flowchart diagram](https://miro.com/app/board/o9J_l-dLC7Y=/)
  - [Acelera Libft](https://www.notion.so/Acelera-Libft-8874a01f188a4671ae503fe9e99056ab) by [rodsmade](https://github.com/rodsmade/Libft-42sp)

- About linked lists:
  - [Understanding and implementing a linked list in C and Java](https://www.youtube.com/watch?v=VOpjAHCee7c) by [Jacob Sorber](https://www.youtube.com/@JacobSorber)
  
- Automated tests:
  - [libftTester](https://github.com/Tripouille/libftTester) by [Tripouille](https://github.com/Tripouille)
  - [War Machine](https://github.com/y3ll0w42/libft-war-machine) by [lmartin](https://github.com/0x050f)
  - [ft_split_tester](https://github.com/Ysoroko/FT_SPLIT_TESTER) by [Ysoroko](https://github.com/Ysoroko)





