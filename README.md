*This project has been created as part of the 42 curriculum by aalemami.*

# libft


*Custom C Standard Library Implementation*

---

## Description

This project was created as part of the 42 curriculum. The goal is to build a custom C library called **libft**, providing reimplementations of standard C library functions alongside custom utility routines used in subsequent 42 projects.

The library consists of four main components:
1. **Part 1 - Libc Functions**: Reimplementations of standard C library functions (`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`).
2. **Part 2 - Additional Functions**: Common string and utility functions (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
3. **Part 3 - Linked Lists**: Singly linked list manipulation utilities (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).
4. **Part 4 - ft_printf**: Integrated formatted output print engine.

---

## Instructions

### Installation

Clone the repository:

```bash
git clone https://github.com/ali-alemami/libft.git
cd libft
```

### Compilation

Compile the static archive `libft.a` using `make`:

```bash
make
```

Additional targets:
```bash
make clean   # Remove object files
make fclean  # Remove object files and libft.a
make re      # Rebuild from scratch
```

### Usage

Include the header file in your C source and link `libft.a`:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello 42!\n", 1);
    return (0);
}
```

Compile with:

```bash
cc main.c -L. -lft -o my_program
```

---

## Resources

- [Linux man pages](https://man7.org/linux/man-pages/) (e.g. `man 3 strlen`, `man 3 memset`)
- [C Programming: Makefiles by Barry Brown](https://www.youtube.com/live/GExnnTaBELk?si=aYJHOSgV4ig30CG7)

### AI Usage

AI tools were used for code review and syntax clarification regarding:
- Edge-case handling in memory operations (`ft_memmove` overlap detection).
- Makefile dependency rules and static library archiving (`ar rcs`).
