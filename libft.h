/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                             :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/03 17:00:54 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/14 18:30:38 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *str, const char *sub, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
// char			**ft_split(char const *str, char c);

int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(const char *str);
// char			*ft_itoa(int num);

// void			*ft_memset(void *b, int c, size_t len);
// void			ft_bzero(void *s, size_t len);
// void			*ft_memcpy(void *dest, const void *src, size_t n);
// void			*ft_memmove(void *dest, const void *src, size_t n);
// void			*ft_calloc(size_t num, size_t size);
// int				ft_memcmp(const void *s1, const void *s2, size_t n);
// char			*ft_strdup(const char *s);
// void			*ft_memchr(const void *ptr, int value, size_t n);

// void			ft_putstr_fd(char *s, int fd);
// void			ft_putendl_fd(char *s, int fd);
// void			ft_putchar_fd(char c, int fd);
// void			ft_putnbr_fd(int n, int fd);

// char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// void			ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
