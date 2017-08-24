/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:44:07 by glodi             #+#    #+#             */
/*   Updated: 2017/08/07 19:15:20 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char str[4];

	str[0] = 'Y';
	str[1] = 'e';
	str[2] = 's';

	printf("%d\n", ft_strlen(str));
}
