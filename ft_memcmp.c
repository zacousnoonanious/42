/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 03:11:23 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 04:11:16 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char*  src1;
    unsigned char*  src2;
    int value;
    int index;
    index = 0;
    src1 = (unsigned char*)s1;
    src2 = (unsigned char*)s2;

    if (src1[0] != src2[0])
            return (0);
    while (index <= n)
    {
        if (src1[index] == src2[index])
            value = 1;
        else
            return (-1);
        
        index++;
    }
    return (value);
}