/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:56:21 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:12:49 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char letter);

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_number(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_number(char letter)
{
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}
