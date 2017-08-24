/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:07:56 by glodi             #+#    #+#             */
/*   Updated: 2017/08/12 19:18:01 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char letter);
int		is_alphanum(char letter);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!is_alphanum(str[i]))
			if (is_lower(str[i + 1]))
				str[i + 1] -= 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}

int		is_alphanum(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	if (letter >= 'a' && letter <= 'z')
		return (1);
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}

int		is_lower(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
