/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 00:08:08 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/06 22:18:58 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void    *ft_memcpy(void *s1, const void *s2, int c, size_t n)
{
    char *c1;
	char *c2;
	size_t cur;

	if (s1 == s2 || n == 0)
		return (s1);
	cur = 0;
	c1 = (char*) s1;
	c2 = (char*) s2;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == c)
			return (c1 + cur + 1);
		cur++;
	}
	return (NULL);
}
