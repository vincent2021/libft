/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 20:56:07 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/28 21:08:21 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_strrev(char *str)
{
	char			swap;
	int				i;
	int				n;

	i = 0;
	n = 0;
	while (str[n])
		n++;
	while (i < n / 2)
	{
		swap = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = swap;
		i++;
	}
	return (str);
}

static int			ft_lbase(char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (base[j + i + 1] == base[i])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

static char			*ft_to_base(int nbr, char *base)
{
	int				i;
	char			*nb_conv;
	int				lbase;
	unsigned int	nbr2;

	lbase = ft_lbase(base);
	i = 0;
	if (!(nb_conv = malloc(sizeof(char) * 35)))
		return (NULL);
	nbr2 = nbr;
	if (nbr < 0 && lbase != 0)
		nbr2 = nbr * -1;
	while (nbr2 > 0 && lbase != 0)
	{
		nb_conv[i] = base[nbr2 % lbase];
		nbr2 = nbr2 / lbase;
		i++;
	}
	if (nbr < 0 && lbase != 0)
		nb_conv[i++] = '-';
	if (nbr == 0)
		nb_conv[i++] = base[0];
	nb_conv[i] = '\0';
	return (nb_conv);
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				lbasefrom;
	int				i;
	int				j;
	int				nb;

	i = 0;
	j = 0;
	lbasefrom = ft_lbase(base_from);
	while (nbr[i])
	{
		while (base_from[j] != nbr[i] && base_from[j])
			j++;
		if (j == lbasefrom)
			return (0);
		j = 0;
		i++;
	}
	i--;
	nb = 0;
	while (nbr[i] && nbr[i] != 45 && lbasefrom != 0)
		nb = nb + (nbr[i--] - 48) * ft_power(lbasefrom, j++);
	if (nbr[i] == 45 && lbasefrom != 0)
		nb = nb * -1;
	return (ft_strrev(ft_to_base(nb, base_to)));
}
