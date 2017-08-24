/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:42:25 by glodi             #+#    #+#             */
/*   Updated: 2017/08/09 13:05:38 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long pos_nb;

	pos_nb = nb;
	if (pos_nb < 0)
	{
		ft_putchar('-');
		pos_nb *= -1;
	}
	if (pos_nb >= 10)
		ft_putnbr(pos_nb / 10);
	ft_putchar(pos_nb % 10 + '0');
}
