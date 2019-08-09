/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 20:22:17 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 04:16:32 by znoonan          ###   ########.fr       */
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

#endif
