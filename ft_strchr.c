/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:29:47 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 15:18:54 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//Example: 'lipstick' c='i' returns ipstick.
char    *ft_strchr(const char *s, int c)
{
    int   i;
    char    *str;
    str = (char*)s;
    while (*str != c)
    {
        if (*str == '\0')
            return (NULL);
        str++;
    }
    return (str);
}