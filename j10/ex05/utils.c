/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodi <glodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 10:57:02 by glodi             #+#    #+#             */
/*   Updated: 2017/08/22 10:56:03 by glodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	compare(int a, int b)
{
	if (a > b)
		return (1);
	else if (a < b)
		return (-1);
	else
		return (0);
}

int main()
{
	int increasing_arr[] = {1, 2, 3, 4, 5, 6, 7};
	printf("ft_is_sort(increasing_arr) > %d\n\n",
		ft_is_sort(increasing_arr, 7, &compare));

	int decreasing_arr[] = {6, 5, 4, 3, 2, 1};
	printf("ft_is_sort(decreasing_arr) > %d\n\n",
		ft_is_sort(decreasing_arr, 6, &compare));

	int equal_arr[] = {1, 1, 1, 1, 1, 1};
	printf("ft_is_sort(equal_arr) > %d\n\n",
		ft_is_sort(equal_arr, 6, &compare));

	int omg_arr[] = {5, 4, 3, 1, 1, 1};
	printf("ft_is_sort(omg_arr) > %d\n\n",
		ft_is_sort(omg_arr, 6, &compare));

	int omg_arr2[] = {1, 1, 1, 3, 5, 6};
	printf("ft_is_sort(omg_arr2) > %d\n\n",
		ft_is_sort(omg_arr2, 6, &compare));

	int *little = NULL;
	printf("ft_is_sort(little) > %d\n\n",
		ft_is_sort(little, 0, &compare));

	int little2[] = {1};
	printf("ft_is_sort(little2) > %d\n\n",
		ft_is_sort(little2, 1, &compare));

	int moulirofl[] = {-274346, -172470, 61704, 2310};
	printf("ft_is_sort(moulirofl) > %d\n\n",
		ft_is_sort(moulirofl, 4, &compare));
	return (0);
}
