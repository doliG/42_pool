/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:59:49 by glodi             #+#    #+#             */
/*   Updated: 2017/08/22 11:36:33 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

int main(int ac, char **av)
{
	ac = 00000;
	int i = 0;
	while (av[++i])
		printf("\t%s\n", av[i]);

	printf("\nSorting... result :\n");
	ft_sort_wordtab(av + 1);
	i = 0;
	while (av[++i])
		printf("\t%s\n", av[i]);
}
