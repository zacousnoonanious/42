/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 08:36:25 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/12 08:49:31 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//s1 = haystack, s2 = needle
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int k;
    int l;

    if (*needle == '\0')
    {
        return (char*)haystack;
    }
    i = 0;
    k = 0;
    while (*(haystack + i) && i < len)
    {
        j = i;
        l = k;
        while (*(needle + l) && *(haystack + j) == *(needle + l) && i + l < len)
        {
            j++;
            l++;
        }
        if (*(needle + l) == '\0')
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}