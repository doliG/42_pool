/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:28:36 by glodi             #+#    #+#             */
/*   Updated: 2017/08/06 20:39:43 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int n = -126456;
	ft_putnbr(n);

	ft_putchar('\n');
	n = 456789;
	ft_putnbr(n);
		
	ft_putchar('\n');
	n = 0;
	ft_putnbr(n);
	
	ft_putchar('\n');
	int lamooort = -2147483648;
	ft_putnbr(lamooort);	
	
	ft_putchar('\n');
	n = 1042962974;
	ft_putnbr(n);
	
	ft_putchar('\n');
	n = 1065518404;
	ft_putnbr(n);
	
	ft_putchar('\n');
	n = -1034098638;
	ft_putnbr(n);
	
	ft_putchar('\n');
	n = -1034098638;
	ft_putnbr(n);
	
	ft_putchar('\n');
	n = -1029854380;
	ft_putnbr(n);
	
	ft_putchar('\n');
	n = -1034098638;
	ft_putnbr(n);

	return (0);
}
