#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_isascii(int c);
size_t  ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *nptr);
char    *ft_strdup(const char *s);



#endif
