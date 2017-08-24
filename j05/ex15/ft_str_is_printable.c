/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:40:28 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:19:11 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c);

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}
