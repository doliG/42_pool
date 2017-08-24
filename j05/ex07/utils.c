/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:11:18 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 08:57:08 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;
	int ft_ret;


	strcpy(str1, "coucoU");
	strcpy(str2, "coucou b");

	ret = strncmp(str1, str2, 6);
	ft_ret = ft_strncmp(str1, str2, 6);

	printf("%d\n", ft_ret);
	printf("%d < expected\n", ret);

	return(0);
}
