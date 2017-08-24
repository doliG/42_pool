/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:42:35 by glodi             #+#    #+#             */
/*   Updated: 2017/08/09 13:04:28 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_putnbr(5);
	ft_putchar('\n');
	ft_putnbr(654);
	ft_putchar('\n');
	ft_putnbr(-2147483648);	
	ft_putchar('\n');
	return (0);
}
