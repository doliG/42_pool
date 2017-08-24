/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:44:31 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:11:51 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);
int		is_letter(char letter);

int 	main()
{
	char str[] = "Couocu";

	printf("is_alpha : %s > %d\n", str, ft_str_is_alpha(str));
	return (0);
}
