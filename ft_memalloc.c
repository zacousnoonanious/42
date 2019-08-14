/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:10:57 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/12 10:26:10 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    *ft_memalloc(size_t size)
{
    void    *memhold;
    memhold = malloc(size);
    if (!memhold)
        return (NULL);
    ft_bzero(memhold, size);
    return (memhold);
}
