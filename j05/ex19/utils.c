/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:36:59 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:49:09 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[] = "Nope !!!";
	char src[] = "asd World !";

	ft_strlcpy(dest, src, 6);
	printf("%s\n", dest);

	return (0);
}
