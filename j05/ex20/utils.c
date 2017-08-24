/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:54:15 by glodi             #+#    #+#             */
/*   Updated: 2017/08/10 16:18:16 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

// int main()
// {
// 	// 24441423
// 	// gtaio luSnemf
// 	int nbr = 24441423;
// 	char base[] = "0123456789ABCD";
//
// 	// printf("\"%s\" valide ? %d\n", base, res);
// 	ft_putnbr_base(nbr, base);
// }

int main()
{
	int i = -10;
	while (i < 20)
	{
 		ft_putnbr_base(i, "01");
		printf("\n");
		i++;
	}
	ft_putnbr_base(24441423, "gtaio luSnemf");
	printf("\n");
	ft_putnbr_base(16, "0123456789abcdefg");
	printf("\n");
	ft_putnbr_base(42, "01234567");
	printf("\n");
	ft_putnbr_base(42, "01234ABC");
	printf("\n");
	ft_putnbr_base(42, "aff");
	printf("\n");
	ft_putnbr_base(42, "");
	printf("\n");
	ft_putnbr_base(42, "2+3");
	return (0);
}
