/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 21:25:41 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/23 00:02:14 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*dst;
	size_t			i;
	unsigned char	*clear;

	i = 0;
	dst = (void *)malloc(size);
	if (dst == NULL)
		return (NULL);
	clear = dst;
	while (size--)
		clear[i++] = 0;
	return (dst);
}
