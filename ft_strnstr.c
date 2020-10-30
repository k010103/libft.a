/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:05:13 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/17 15:03:34 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		l;

	i = 0;
	l = ft_strlen(little);
	if (!l)
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (l == j + 1)
				return (&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
