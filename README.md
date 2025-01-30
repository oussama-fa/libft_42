# Libft - 42 School Project - 1337 KH

## Overview

`Libft` is a project from the `42 School`  that involves creating a custom C library containing essential functions from the standard C library. The goal is to reimplement commonly used functions such as those from `<string.h>`, `<stdlib.h>`, and `<ctype.h>`, while improving skills in *memory management*, *pointer manipulation*, and *algorithmic thinking*.

This project helps build a strong foundation in **low-level programming** and prepares for future projects by providing a personal standard library.

---

## Screenshots

Here are some screenshots of my project implementation:

<div align="center">
  <img src="125.png" alt="125 Successe" width="500"/>
  <img src="corr.png" alt="MOULINETTE" width="900"/>
</div>

---

### Features

- A collection of commonly used C functions including:

1. **Memory Allocation**: `ft_calloc` ...

2. **String manipulation**: `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strjoin`, `ft_substr`, `ft_split`, `strchr`, `strnstr`, `strrchr` ...

3. **Character checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` ...

4. **Memory functions**: `ft_memset`, `ft_bzero,` `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_memchr` ...

5. **Conversion functions**: `ft_atoi`, `ft_itoa` ...

6. **File Descreptors**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd` ...

7. **Linked List Functions**: `lstnew`, `lstadd_front`, `lstadd_back`, `lstsize`, `lstdelone`, `lstclear`, `lstiter`, `lstmap` ...

- Each function was implemented with thorough attention to detail, ensuring they mimic the behavior of the corresponding **C Standard Library** function.

- Custom implementations without relying on the standard library.

- Useful for future projects requiring efficient and optimized C functions.

---

## How It Works

`Libft` is a static library that provides a collection of fundamental C functions, making it easier to `handle strings`, `memory allocation`, `linked lists`, and more.

---

## Key Concepts Used:

- **Pointer manipulation** and **memory allocation**.

- **String** and **character** operations.

- **Linked list** implementation.

- **Efficient function design for better performance**.

---

### Installation and Compilation:

1. Clone the repository:

```bash
git clone https://github.com/oussama-fa/libft_42.git
cd cd libft_42
```

2. Compile the project:

You must creat a main.c and `#include "libft.h"`

```bash
make
```

You find `libft.a`

```bash
cc main.c libft.a -o programe_name
```

3. Run the program:
```bash
./programe_name
```

---

## Author
*Oussama FARAH*

- 📱 **Instagram**: [@oussama._.farah](https://www.instagram.com/oussama._.farah/)
- ✉️ **Email**: [oussama05farah@gmail.com](mailto:oussama05farah@gmail.com)
