/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 21:36:50 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 01:02:33 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//at most len bytes of src are copied.
#include "libft.h"
#include <string.h>

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    int i;
    i = 0;
    while (i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
