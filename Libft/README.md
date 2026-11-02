*This project has been created as part of the 42 curriculum by aelmanas.*

## Description

Libft is my first own C library, built as part of the 42 Common Core.
The goal is to understand how standard C functions work by
re-implementing them, and to build a reusable toolbox for future 42
projects.

The library (`libft.a`) is compiled with `cc -Wall -Wextra -Werror`,
archived with `ar`, and follows the 42 Norm. It contains three parts:

### Part 1: Libc functions

Re-implementations of standard functions, prefixed with `ft_`:
`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `strlen`,
`memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`,
`toupper`, `tolower`, `strchr`, `strrchr`, `strncmp`, `memchr`,
`memcmp`, `strnstr`, `atoi`, `calloc`, `strdup`.

### Part 2: Additional functions

- `ft_substr`: allocates and returns a substring of a string.
- `ft_strjoin`: concatenates two strings into a newly allocated one.
- `ft_strtrim`: removes a set of characters from both ends of a string.
- `ft_split`: splits a string by a delimiter into a NULL-terminated array.
- `ft_itoa`: converts an integer to a string (handles `INT_MIN`).
- `ft_strmapi` / `ft_striteri`: apply a function to each character.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`:
  write to a given file descriptor.

### Part 3: Linked lists

Functions to manipulate the `t_list` structure:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
`ft_lstmap`.

### Technical choices

- `ft_calloc` checks for multiplication overflow before allocating and
  returns a valid, freeable pointer when `nmemb` or `size` is 0.
- `ft_memmove` copies backwards when the destination is after the source,
  so overlapping buffers are handled correctly.
- `ft_itoa` and `ft_putnbr_fd` use a `long` internally to handle `INT_MIN`.
- `ft_split` frees every already-allocated string and the array itself if
  an allocation fails midway.

## Instructions

Compile the library from the root of the repository:

```
make         # builds libft.a
make clean   # removes object files
make fclean  # removes object files and libft.a
make re      # rebuilds everything
```

To use it in your own project, include the header in your code:

```c
#include "libft.h"
```

Then compile and link against the library:

```
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Resources

- Linux man pages (`man 3 strlen`, `man 3 memmove`, etc.)
- The 42 Norm
- Peer discussions with other students at the campus

### Use of AI

AI was used as a learning and review tool during this project:

- **Code review:** checking my functions for edge cases and bugs (e.g.
  `strlcat` underflow, `memcmp` reading out of bounds, `INT_MIN` in
  `ft_itoa`, overflow check in `ft_calloc`).
- **Explanations:** understanding concepts such as `size_t` wrap-around
  (`(size_t)-1`) and how `memmove` handles overlapping memory.
- **Algorithm hints:** step-by-step outlines for `ft_memmove`,
  `ft_strlcat`, `ft_strnstr` and `ft_atoi`, which I then implemented.
- **Norm and formatting:** help fixing Norm issues in a few small
  functions (`ft_bzero`, `ft_strlen`, `ft_strchr`, `ft_strrchr`,
  `ft_strncmp`).
- **Boilerplate:** help writing the `Makefile`, the `libft.h` header and
  this README.

I tested the library with my own test programs and I am able to explain
every function.
