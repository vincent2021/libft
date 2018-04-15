/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 23:09:43 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/15 23:10:00 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i] && n > 0)
	{
		i++;
		n--;
	}
	return (i);
}

size_t			ft_strlcat(char *restrict dst, const char *restrict src,
		size_t size)
{
	size_t	d;
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	d = 0;
	len_src = 0;
	len_dst = ft_strnlen(dst, size);
	while (dst[d])
		d++;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_dst + len_src);
	while (src[i] && size - 1 > i + len_dst)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (len_dst + len_src);
}
