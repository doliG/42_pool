/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:04:32 by glodi             #+#    #+#             */
/*   Updated: 2017/08/09 19:07:01 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char str[] = "je Veux UniQueMenT dES MINUSCULes !!";

	printf("%s < input\n", str);
	ft_strlowcase(str);
	printf("%s < output\n", str);

	return (0);
}
