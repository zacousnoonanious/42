/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 22:31:58 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/11 02:35:28 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//s1 = haystack, s2 = needle
char    *ft_strstr(char *haystack, char *needle)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (haystack[i] != '\0')
    {
        while (needle[i] == haystack[i + j])
        {
            if (needle[j + 1] == '\0')
            {
                return (haystack + i);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}
