/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 13:51:16 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/15 18:15:21 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		l;
	char	*dst;

	i = 0;
	l = ft_strlen(s1);
	if (!(dst = ft_strnew(l)))
		return (NULL);
	dst[l] = '\0';
	while (i < l)
	{
		dst[i] = s1[i];
		i++;
	}
	return (dst);
}
