/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:08:02 by glodi             #+#    #+#             */
/*   Updated: 2017/08/12 19:18:09 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strcapitalize(char *str);
int		is_lower(char letter);

int main()
{
	char str[] = "REKt17+Lol Mdr Mdr 4242l42";

	printf("%s < input\n", str);
	ft_strcapitalize(str);
	printf("%s < output\n", str);

	printf("isletter(A) > %d\n", is_lower('A'));
	printf("isletter(Z) > %d\n", is_lower('Z'));
	printf("isletter(a) > %d\n", is_lower('a'));
	printf("isletter(z) > %d\n", is_lower('z'));
	printf("isletter(!) > %d\n", is_lower('!'));

	return (0);
}
