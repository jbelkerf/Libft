# Libft

Libft is a custom C library that replicates standard library functions and introduces additional utilities for handling strings, memory, linked lists, and more. This project is part of the 42 curriculum and serves as a foundation for future projects.

## Features

- Reimplementation of standard C library functions (e.g., `strlen`, `strcpy`, `memcpy`, `atoi`)
- Additional utility functions for memory management and string manipulation
- Linked list handling functions (e.g., `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstnew`, `ft_lstclear`)
- Extensible structure for future enhancements

## Installation

To compile and use Libft in your projects, clone this repository and run:

```sh
make
```

This will generate the `libft.a` static library.

## Usage

To use Libft in your project, include the library in your compilation:

```sh
gcc your_program.c -L. -lft -o your_program
```

Or in a Makefile:

```make
LIBFT = ./libft/libft.a

all:
	gcc -o my_program main.c $(LIBFT)
```

## File Structure

- `libft.h` – Header file with function prototypes
- `Makefile` – Compilation rules
- `libft.a` – Compiled static library
- Source files:
  - **Standard functions**: `ft_atoi.c`, `ft_bzero.c`, `ft_calloc.c`, `ft_isalnum.c`, `ft_isalpha.c`, `ft_isascii.c`, `ft_isdigit.c`, `ft_isprint.c`, `ft_itoa.c`, `ft_memchr.c`, `ft_memcmp.c`, `ft_memcpy.c`, `ft_memmove.c`, `ft_memset.c`, `ft_putchar_fd.c`, `ft_putendl_fd.c`, `ft_putnbr_fd.c`, `ft_putstr_fd.c`, `ft_split.c`, `ft_strchr.c`, `ft_strdup.c`, `ft_striteri.c`, `ft_strjoin.c`, `ft_strlcat.c`, `ft_strlcpy.c`, `ft_strlen.c`, `ft_strmapi.c`, `ft_strncmp.c`, `ft_strnstr.c`, `ft_strrchr.c`, `ft_strtrim.c`, `ft_substr.c`, `ft_tolower.c`, `ft_toupper.c`
  - **Linked list functions** (Bonus): `ft_lstadd_back_bonus.c`, `ft_lstadd_front_bonus.c`, `ft_lstclear_bonus.c`, `ft_lstdelone_bonus.c`, `ft_lstiter_bonus.c`, `ft_lstlast_bonus.c`, `ft_lstmap_bonus.c`, `ft_lstnew_bonus.c`, `ft_lstsize_bonus.c`

## Contributing

If you want to contribute, fork the repository, make changes, and submit a pull request.

## License

This project is open-source under the MIT License.

## Author

Developed by Jaouad Belkerf (jbelkerf) as part of the 42 curriculum.

