/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:17:25 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 00:25:45 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    char *s1;
    char *d1;
	int cur;
    cur = 0;
    s1 = (char *)src;
    d1 = (char *)dst;
    
    while (cur < n)
    {
        d1[cur] = s1[cur];
        if (s1[cur] == (char)c)
            return (dst + cur + 1);
        cur++;
    }
    return (0);
}