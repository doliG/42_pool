/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:32:24 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:14:53 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int 	main()
{
	char str[] = "abc0d";

	printf("ft_str_is_lowercase : %s > %d\n", str, ft_str_is_lowercase(str));
	return (0);
}
