/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:18:15 by glodi             #+#    #+#             */
/*   Updated: 2017/08/09 13:25:30 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char src[40];
	char dest[40];

	strcpy(src, "Ceci n'est pas une string (R.Magrotte)");
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("Ceci n'est pas une string (R.Magrotte) < expected");

	return(0);
}
