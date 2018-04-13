/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 21:43:05 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/13 21:53:16 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
	{
		if (*s == c)
		{
			*d = *s;
			return ((void *)++d);
		}
		*d++ = *s++;
	}
	return (NULL);
}
