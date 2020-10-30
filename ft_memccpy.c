/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 20:43:11 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/12 18:52:29 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;
	unsigned char	chk;
	size_t			i;

	chk = (unsigned char)c;
	i = 0;
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (i < n)
	{
		de[i] = sr[i];
		if (sr[i] == chk)
			return (&de[i + 1]);
		i++;
	}
	return (NULL);
}
