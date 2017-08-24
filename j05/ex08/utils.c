/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:35:23 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 08:58:32 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
	char str[] = "je Veux des majuscules a chaque lettre de chaque mot a";

	printf("%s < input\n", str);
	ft_strupcase(str);
	printf("%s < output\n", str);

	return (0);
}
