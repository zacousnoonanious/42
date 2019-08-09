/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprogram.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:12:38 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/09 04:41:45 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *returned;
	char arr1[8] = "camp";
	char arr2[8] = "cats";
	returned = ft_strncat(arr1, arr2, 2);
	//ft_memcmp
	// printf("Function \033[0;34m %s \033[0;0m with parameters \033[0;31m '%s' \033[0;0m", 
	// "ft_memcmp", ft_memcmp(arr1, arr2, 1));
	printf("%s", returned);
}
