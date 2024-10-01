#pragma once

# include <string.h>
# include <unistd.h>
# include <stdio.h>

void				ft_bzero(void *destination, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memcpy(void *destination, const void *source, size_t n);
void				*ft_memset(void *destination, int c, size_t n);
void				*ft_memmove(void *destination, const void *source, size_t n);
size_t      ft_strlcat(char *dst, const char *src, size_t size);
size_t      ft_strlcpy (char *dst, const char *src, size_t size);
size_t      strlen(const char *s);