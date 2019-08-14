/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:06:24 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/12 09:29:00 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     atoi(const char *str)
{
    int i;
    int sign;
    i = 0;
    sign = 1;
    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
    if (*str == '-')
    {
        sign = -1;
        ++str;
    }
    if (*str == '+')
        ++str;
    while (*str && *str == '0' && *str <= '9')
    {
        i = (i * 10) + (*str - 48);
        ++str;
    }
    return (i * sign);
}
