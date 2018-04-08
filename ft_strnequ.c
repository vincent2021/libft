/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimucchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:04:07 by vimucchi          #+#    #+#             */
/*   Updated: 2018/04/07 22:59:45 by vimucchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned long	i;
	unsigned long	len_s1;
	unsigned long	len_s2;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (i == n || (i == len_s1 && i == len_s2))
		return (1);
	else
		return (0);
}
