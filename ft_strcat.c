/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 23:06:59 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/04 15:29:52 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The C library function char *strcat(char *dest, const char *src) appends 
//the string pointed to by src to the end of the string pointed to by dest.
#include <stdlib.h>
#include "libft.h"
char    *ft_strcat(char *s1, char *s2)
{
    int i;
    int j;
    i = 0;
    while (s2[i] != '\0')
        i++;
    j = 0;
    printf("maximum of i is %d", i);
    while (s1[j] != '\0')
    {
        s2[i + j] = s1[j];
        j++;
    }
    printf("maximum of j is %d", j);
    s2[i + j] = '\0';
    return &(*s2);
}