/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:04:59 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/13 19:09:52 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    int     i;
    char    *str;
    i = 0;
    

    if (!(str = (char*) malloc(sizeof(char) * ft_strlen(s) + 1)) || (!s))
        return (NULL);
    
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}