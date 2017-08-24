/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:07:05 by glodi             #+#    #+#             */
/*   Updated: 2017/08/07 08:26:05 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int		main()
{
	printf("%d\n", ft_atoi(" -0654 650coucou"));
	printf("%d < expected\n", atoi(" -0654 650coucou"));
	
	printf("%d\n", ft_atoi("512"));
	printf("%d < expected\n", atoi("512"));
	
	printf("%d\n", atoi("512cou"));
	printf("%d < expected\n", atoi("512"));
	
	printf("%d\n", atoi("-512cou"));
	printf("%d < expected\n", atoi("-512cou"));
	
	printf("%d\n", atoi(" -512cou"));
	printf("%d < expected\n", atoi(" -512cou"));
	
	printf("%d\n", atoi("\n-512cou"));
	printf("%d < expected\n", atoi("\n-512cou"));
	
	printf("%d\n", atoi("\t-512cou"));
	printf("%d < expected\n", atoi("\t-512cou"));
	return (0);
}
