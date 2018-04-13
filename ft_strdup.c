/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 13:51:16 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/08 13:57:40 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*dst;

	i = 0;
	len = ft_strlen(s1);
	dst = (char *)malloc(ft_strlen(s1) * (sizeof(char) + 1));
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	if (dst == NULL)
		return (NULL);
	return (dst);
}
