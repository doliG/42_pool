/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:38:54 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:17:42 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int 	main()
{
	char str[] = "COUa";

	printf("ft_str_is_uppercase : %s > %d\n", str, ft_str_is_uppercase(str));
	return (0);
}
