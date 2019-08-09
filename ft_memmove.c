/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:41:09 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 01:50:50 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *mysrc;
    char    *mydst;
    size_t i;
    i = 0;
    mysrc = (char*)src;
    mydst = (char*)dst;
    if (mysrc < mydst)
    {
        while (len > 0)
        {
           len--;
            *(mydst +len) = *(mysrc +len);
            
        }
    }
    else
    {
        while (i <len)
        {
            *(mydst + i) = *(mysrc + i);
            i++;
        }
        
    }
    return (dst);
}
