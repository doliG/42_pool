/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:07:01 by glodi             #+#    #+#             */
/*   Updated: 2017/08/09 13:15:56 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int multiplier;
	int cursor;

	result = 0;
	multiplier = 1;
	cursor = 0;
	while (str[cursor] <= 32)
		cursor++;
	if (str[cursor] == '+')
		cursor++;
	else if (str[cursor] == '-')
	{
		cursor++;
		multiplier = -1;
	}
	while (str[cursor] >= '0' && str[cursor] <= '9')
	{
		result *= 10;
		result += str[cursor] - 48;
		cursor++;
	}
	return (result * multiplier);
}
