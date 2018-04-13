/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 21:33:11 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/08 21:49:03 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dst;
	int		i;

	i = 0;
	dst = (char *)malloc((size + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (size--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
