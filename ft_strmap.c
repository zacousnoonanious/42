/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:45:33 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/13 19:09:57 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_strmap(const char *s, char (*f)(char))
{
    int     i;
    char    *str;
    i = 0;
    

    if (!(str = (char*) malloc(sizeof(char) * ft_strlen(s) + 1)) || (!s))
        return (NULL);
    
    while (s[i])
    {
        str[i] = f(s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
