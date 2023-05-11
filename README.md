# Libft
Libft is a library of C functions implemented as part of the curriculum at 42 school. It includes both standard and additional C functions for memory allocation, string manipulation, character handling, and more.

## Getting started
To use the library, first compile it using the provided Makefile. You can then link it to your own programs by adding `-L./libft -lft` to your compilation command and  including the header file `libft.h`.

## Functions

### Memory functions

- `ft_bzero`
- `ft_calloc`
- `ft_memchr`
- `ft_memcmp`
- `ft_memcpy`
- `ft_memmove`
- `ft_memset`

### String functions

- `ft_atoi`
- `ft_itoa`
- `ft_split`
- `ft_strchr`
- `ft_strdup`
- `ft_striteri`
- `ft_strjoin`
- `ft_strlcat`
- `ft_strlcpy`
- `ft_strlen`
- `ft_strmapi`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strrchr`
- `ft_strrev`
- `ft_strtrim`
- `ft_substr`

### Character functions

- `ft_isalnum`
- `ft_isalpha`
- `ft_isascii`
- `ft_isdigit`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

### Write functions

- `ft_putchar_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`
- `ft_putstr_fd`

### Linked lists functions
- `ft_lstadd_back`
- `ft_lstadd_front`
- `ft_lstclear`
- `ft_lstdelone`
- `ft_lstiter`
- `ft_lstlast`
- `ft_lstmap`
- `ft_lstnew`
- `ft_lstsize`