/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:24:00 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/13 19:27:08 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *outcome;
    if (!s)
        return (NULL);
    if (!(outcome = ft_memalloc(len + 1)))
        return (NULL);
    outcome = ft_strncpy(outcome, (char*)s + start, len);
    return (outcome);
}
