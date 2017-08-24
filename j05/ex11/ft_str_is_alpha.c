/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:44:18 by glodi             #+#    #+#             */
/*   Updated: 2017/08/11 09:11:00 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char letter);

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_letter(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_letter(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	if (letter >= 'a' && letter <= 'z')
		return (1);
	return (0);
}
