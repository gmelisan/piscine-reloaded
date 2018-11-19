/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:47:15 by gmelisan          #+#    #+#             */
/*   Updated: 2018/11/19 16:47:46 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	i = 2;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
