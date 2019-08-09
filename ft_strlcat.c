/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 08:29:52 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/08 18:30:09 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int    ft_strlcat(char *dst, char *src, size_t dstsize)
{
    int i;
    int j;
    int k;
    i = 0;
    while (dst[i] != '\0')
        i++;
    j = 0;
    while (src[j] != '\0' && j < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    k = 0;
    while (src[k] != '\0')
        k++;
    return (k + dstsize);
}