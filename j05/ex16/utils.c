/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 21:00:40 by glodi             #+#    #+#             */
/*   Updated: 2017/08/10 09:15:56 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[20] = "Hello";
	char src[10] = " World !";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
