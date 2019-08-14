/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 08:52:50 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/12 08:58:51 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     strcmp(const char *s1, const char *s2)
{
    while (*s1 && *s2)
    {
        while (*s1 == *s2)
        {
            s1++;
            s2++;
        }
        return ((unsigned char)*s1 - (unsigned char)*s2);
    }
}
