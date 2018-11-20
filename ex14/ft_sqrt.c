/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:53:06 by gmelisan          #+#    #+#             */
/*   Updated: 2018/11/20 10:14:32 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
