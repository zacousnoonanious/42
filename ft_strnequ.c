/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:19:01 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/13 19:23:01 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if ((ft_strncmp(s1, s2, n) == 0) && !(s1 == NULL || s2 == NULL))
        return (1);
    return 0;
}
