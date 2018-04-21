/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:29:47 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/22 00:22:23 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	l;
	char	*str;
	char	*tmp;

	str = malloc(1252828);
	if (!s)
		return (NULL);
	if ((l = ft_strlen(s)) == 0)
		return ("");
	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (i == l)
		return ("");
	while (s[l] == ' ' || s[l] == '\n' || s[l] == '\t' || s[l] == '\0')
		l--;
	if (!(tmp = ft_strsub(s, i, l - i + 1)))
		return (NULL);
	str = tmp;
	return (str);
}
