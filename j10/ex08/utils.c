/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:30:28 by glodi             #+#    #+#             */
/*   Updated: 2017/08/22 11:36:44 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


int main(int ac, char **av)
{
	ac = 00000;
	int i = 0;
	while (av[++i])
		printf("\t%s\n", av[i]);

	ft_advanced_sort_wordtab(av + 1, &ft_strcmp);
	printf("\nSorting... result :\n");
	i = 0;
	while (av[++i])
		printf("\t%s\n", av[i]);
}
