/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 08:40:06 by glodi             #+#    #+#             */
/*   Updated: 2017/08/07 11:18:13 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size);

int		main()
{
	int arr[] = {1, 5, 6, 32, 5, 78, 9, 654, 123, 89, 65};
	ft_sort_integer_table(arr, 11);
	
	int i = 0;
	while (i < 11)
	{
		printf("%i, ", arr[i]);
		i++;
	}
	
	int big_size = 10000;
	int big[big_size];
	i = 0;
	while (i < big_size)
	{
		big[i] = rand() % 10000;
		i++;
	}

	printf("\n\n");
	ft_sort_integer_table(big, big_size);
	i = 0;
	while (i < big_size)
	{
		printf("%i, ", big[i]);
		i++;
	}
	return (0);
}
