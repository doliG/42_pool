/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:56:32 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:13:31 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);
int		is_letter(char letter);

int 	main()
{
	char str[] = "1234a56";

	printf("is_numeric : %s > %d\n", str, ft_str_is_numeric(str));
	return (0);
}
