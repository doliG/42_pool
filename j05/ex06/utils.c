/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:11:39 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 08:55:19 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;
	int ft_ret;


	strcpy(str1, "A");
	strcpy(str2, "B");

	ret = strcmp(str1, str2);
	ft_ret = ft_strcmp(str1, str2);

	printf("%d\n", ft_ret);
	printf("%d < expected\n", ret);

	return(0);
}
