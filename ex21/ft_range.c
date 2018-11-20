/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:02:52 by gmelisan          #+#    #+#             */
/*   Updated: 2018/11/20 11:16:24 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *result;
	int i;

	if (min >= max)
		return (0);
	size = max - min;
	result = (int*)malloc(sizeof(*result) * size);
	if (!result)
		return (0);
	i = 0;
	while (min < max)
	{
		result[i++] = min;
		min++;
	}
	return (result);
}
