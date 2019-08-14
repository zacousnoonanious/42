/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 20:22:17 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/13 19:27:33 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef mainprogram_h
#define mainprogram_h

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void	*ft_memset(void *message, int c, size_t len);
void    *ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memcpy(void *s1, const void *s2, int c, size_t n);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_bzero(void *pointer, size_t length);
int     ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strcat(char *s1, char *s2);
int     ft_strlcat(char *dst, char *src, size_t dstsize);
char    *ft_strncat(char *dest, const char *src, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strstr(char *haystack, char *needle);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isanum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **mem);
void    ft_strnew(size_t size);
void    ft_strdel(char **rem);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char*));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
void    ft_strmap(const char *s, char (*f)(char));
char    ft_strmapi(const char *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strsub(char const *s, unsigned int start, size_t len);

#endif
