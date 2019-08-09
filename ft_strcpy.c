/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 20:21:43 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 01:02:09 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strcpy() function copies the string pointed to by src, including the 
//terminating null byte ('\0'), to the buffer pointed to by dest. The strings
//may not overlap, and the destination string dest must be large enough to 
//receive the copy.

#include "libft.h"
#include <string.h>

char    *ft_strcpy(char *dst, const char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
