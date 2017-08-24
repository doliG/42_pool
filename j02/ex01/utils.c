/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:28:36 by glodi             #+#    #+#             */
/*   Updated: 2017/08/03 20:58:53 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
