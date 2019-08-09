/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 01:53:09 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 03:13:03 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char    *ptr;
    int new_n;
    ptr = (unsigned char*)s;
    new_n = n;

    while (new_n> 0)
    {
        if (*ptr != (unsigned char)c)
            ptr++;
        else
            return (ptr);
        new_n--;
    }
    return (NULL);
}
