/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:59:24 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/02 20:16:32 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    int counter;
    int len;
    len = 0;
    char *str;
    while (s1[len])
        len++;
    str = (char*)malloc(sizeof(*str) * (len + 1));
    counter = 0;
    while (counter < len)
    {
        str[counter] = s1[counter];
        counter++;
    }
    return str;
}
