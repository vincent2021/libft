/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 20:05:54 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/28 20:15:03 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb = nb * ft_power(nb, power - 1);
	return (nb);
}
