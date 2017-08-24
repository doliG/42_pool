/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:30:19 by glodi             #+#    #+#             */
/*   Updated: 2017/08/13 15:13:55 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int size_src;

	i = 0;
	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	while (i < n)
	{
		if (i < size_src)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
