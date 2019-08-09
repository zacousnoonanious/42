/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:36:03 by znoonan           #+#    #+#             */
/*   Updated: 2019/07/29 22:36:52 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_bzero(void *s, size_t len)
{
	size_t start;
	start = 0;
	char *myptr;
	myptr = s;
	while (start < len)
	{
		*(myptr + start) = '0';
		start++;
	}
	return s;
}