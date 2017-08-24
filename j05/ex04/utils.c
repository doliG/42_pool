/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:30:18 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 11:33:54 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[40] = "Ceci n'est pas une string (R.Magrotte)";
	char dest[40];
	char dest2[40];

	ft_strncpy(dest, src, 25);
	printf("%s\n", dest);

	strncpy(dest2, src, 25);
	printf("%s < expected\n", dest2);

	return(0);
}
