/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 19:40:50 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/08 21:22:23 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (needle == '\0')
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
