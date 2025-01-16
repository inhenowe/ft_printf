/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:16:20 by aleortiz          #+#    #+#             */
/*   Updated: 2025/01/08 17:25:34 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(const char *str);
void			*ft_bzero(void *s, int i);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int car, int cant_car);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *str, int c);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
void			*ft_memchr(const void *s, int c, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
