/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:54:14 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 08:53:40 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char haystack[20] = "Hello world !";
	char needle[10] = "world";
	char *ret;

	ret = ft_strstr(haystack, needle);

	printf("The substring is: %s\n", ret);

	return(0);
}
