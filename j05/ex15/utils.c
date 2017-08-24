/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:40:45 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:19:32 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int		ft_str_is_printable(char *str);

int 	main()
{
	char str[] = "Coucou !!";

	printf("ft_str_is_printable : %s > %d\n", str, ft_str_is_printable(str));
	return (0);
}
