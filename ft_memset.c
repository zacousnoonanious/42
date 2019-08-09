/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:36:03 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/02 20:28:35 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function fills the first len bytes of the memory area
//pointed to by message with the constant byte c.
//The memset() function returns a pointer to the memory area message.
#include "libft.h"
void	*ft_memset(void *message, int c, size_t len)
{
	size_t start;
	start = 0;
	char *myptr;
	myptr = message;
	while (start < len)
	{
		*(myptr + start) = c;
		start++;
	}
	return message;
}