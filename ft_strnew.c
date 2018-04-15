/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 21:33:11 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/15 23:14:14 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (1 + size--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
