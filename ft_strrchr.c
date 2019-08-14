/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:29:47 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 15:23:33 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//Example: 'lipstick' c='i' returns ick.
char    *ft_strrchr(const char *s, int c)
{
    int   i;
    i = ft_strlen((char*)s);
    while (s[i] != (char)c && i != 0)
    {
        i--;
    }
    if (s[i] == (char)c)
        return ((char*)&s[i]);
    return (NULL);
}