/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:17:03 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 11:21:52 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int size_dest;
	int i;

	size_dest = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
