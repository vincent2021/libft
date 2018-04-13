/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 21:22:59 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/08 21:37:11 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l_cmp;

	i = 0;
	if (needle == '\0')
		return ((char *)haystack);
	l_cmp = ft_strlen(needle);
	while (haystack[i] && i + l_cmp < len)
	{
		if (ft_strncmp(&haystack[i], needle, l_cmp) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
