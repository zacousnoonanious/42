/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 04:12:36 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 04:42:20 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
char    *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t  dest_len = ft_strlen(dest);
    size_t  src_len = ft_strlen(src);
    size_t  i;
    i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i + dest_len] = src[i];
        i++;
    }
    dest[i + dest_len] = '\0';
    return (dest);
}
