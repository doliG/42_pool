/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:49:47 by glodi             #+#    #+#             */
/*   Updated: 2017/08/05 14:38:50 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		main()
{
	// This shit doesn't works  but the function works
	int n;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	
	n = 2;

	ptr1 = &n;
	ptr2 = &ptr1;
	ptr3 = &&ptr2;
	ptr4 = &&&ptr3;
	ptr5 = &&&&ptr4;
	ptr6 = &&&&&ptr5;
	ptr7 = &&&&&&ptr6;
	ptr8 = &&&&&&&ptr7;
	ptr9 = &&&&&&&&ptr8;

	ft_putchar(n + 48);
	ft_ultimate_ft(ptr9);
	ft_putchar(n + 48);
	return (0);
}
