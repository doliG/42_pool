/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:49:47 by glodi             #+#    #+#             */
/*   Updated: 2017/08/05 00:46:40 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		main()
{
	int n;

	n = 5;

	ft_putchar(n + 48);
	ft_ft(&n);	
	ft_putchar(n + 48);
	return (0);
}