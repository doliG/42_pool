/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:49:36 by glodi             #+#    #+#             */
/*   Updated: 2017/08/12 20:55:11 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[20] = "Hello Florian, ";
	char src[] = " ton  !";
	int ret;

	ret = ft_strlcat(dest, src, 35);

	printf("%s\nret : %d\n", dest, ret);

	return (0);
}
