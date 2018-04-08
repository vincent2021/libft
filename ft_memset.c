/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 19:31:28 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/07 21:53:27 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	unsigned long	i;

	dst = b;
	i = 0;
	while (dst[i] && i < len)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}