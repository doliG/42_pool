/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:17:51 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 11:22:50 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, int nb);

int main()
{
	char src[10] = " World !";
	char dest[20] = "Hello";
	ft_strncat(dest, src, 2);
	printf("%s\n", dest);
	return (0);
}
